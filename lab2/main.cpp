#include <iostream>
#include <bits/stdc++.h>
#include <math.h>

using namespace std;


class equation {
public:
    double a;
    double b;
    double c;

    double d() {
        return (b * b - 4 * a * c);
    };

    vector<double> solve() {
        if (d() >= 0) {
            vector<double> ans;
            ans.push_back((-b - sqrt(d())) / (2 * a));
            ans.push_back((-b + sqrt(d())) / (2 * a));
            sort(ans.begin(), ans.end());
            return (ans);
        } else {
            cerr << "мнимые корни ,ведиете новые кофициенты  a,b,c" << endl;
            cin >> a >> b >> c;
            return (solve());

        }
    }

    void read_coefficient() {
        cout << "введите коэфиценты a, b, c при x^2,x,x^0 в ax^2+bx+c=0 " << endl;
        cin >> a >> b >> c;
    }

    void write_answer() {
        vector<double> ans = solve();
        for (int i = 0; i < ans.size(); i++)
            cout << "x = " << ans[i] << endl;
        cout << endl;
    }

    void write_equal() {
        string ans = to_string(a) + "x^2 + " + to_string(b) + "x + " + to_string(c);
        cout << ans << endl;
    }
};

class student {
public:
    string name;
    int score = 0;

    student(string new_name) { name = new_name; }

    virtual vector<double> get_solution(equation cur_equal) = 0;

    friend bool operator<(const student &x, const student &y);
};

bool operator<(const student &x, const student &y) { return x.name < y.name; }

class bad_student : public student {
public:
    bad_student(string new_name) : student(new_name) {}

    vector<double> get_solution(equation cur_equal) {
        vector<double> ans;
        ans.push_back(0);
        return ans;
    }
};

class std_student : public student {
public:
    std_student(string new_name) : student(new_name) {}

    vector<double> get_solution(equation cur_equal) {
        if (rand() % 2) {
            vector<double> ans = cur_equal.solve();
            ans[1] += 1;
            return ans;
        } else
            return cur_equal.solve();

    }
};

class good_student : public student {

    vector<double> get_solution(equation cur_equal) {
        return cur_equal.solve();
    }

public:
    good_student(string new_name) : student(new_name) {}
};


class teacher {
public:

    void check_solution(equation cur_equal, student *cur_student) {
        vector<double> student_answer = cur_student->get_solution(cur_equal);
        if (student_answer.size() != 1) {
            auto ans = cur_equal.solve();
            if (ans[0] == student_answer[0] && ans[1] == student_answer[1])
                cur_student->score += 1;
        }
    }

    void show_result(vector<student *> &stud_vector) {
        for (auto i :stud_vector) {
            cout << i->name << " " << i->score << endl;
        }
    }
};

void fill_students(vector<student *> &stud_vector, int k) {
    for (int i = 0; i < k; i++) {
        int type = rand() % 3;

        string name;
        cin >> name;
        if (type == 0) {
            stud_vector.push_back(new bad_student(name));
//            my_class.push_back(tmp);
        } else if (type == 1) {
            stud_vector.push_back(new std_student(name));
        } else {
            stud_vector.push_back(new good_student(name));
        }


    }


}


int main() {
    vector<equation> questions;
    vector<student *> group;
    teacher my_teacher;
    srand(time(nullptr));
    freopen("tasks.txt", "r+", stdin);
    cerr << "вводим колличество учеников n и список класса" << endl;
    int n;
    cin >> n;
    fill_students(group, n);
    cerr
            << "вводим число задач m и коффичиенты a b c квадратных уравнений уравнений которые распределяться рандомно между студентами"
            << endl;
    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        equation input_eq{};
        cin >> input_eq.a >> input_eq.b >> input_eq.c;
        questions.push_back(input_eq);
    }
    cerr << "теперь экзамен введите число задач выдаваемых задач k (максисмум m)" << endl;
    int k;
    cin >> k;
    for (auto person :group) {
        for (int i = 0; i < k; i++)
            my_teacher.check_solution(questions[rand() % m], person);
    }
    cerr << "результаты" << endl;
    my_teacher.show_result(group);
    cerr << "чистим память" << endl;
    vector<student *>().swap(group);
    vector<equation>().swap(questions);

    return 0;
}
//удалять память (сделано)