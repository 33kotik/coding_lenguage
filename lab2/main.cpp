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
    int score;

    virtual vector<double> get_solution(equation cur_equal) {
    }
};

class bad_student : public student {
public:

    vector<double> get_solution(equation cur_equal) {
        vector<double> ans;
        ans.push_back(0);
        return ans;
    }
};

class std_student : public student {
public:
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
};

class result_table {
public:
    map<string, int> student;
//    students['vasia']+=1;
//    studen
};

class teacher {
public:
    result_table result;

    void check_solution(equation cur_equal, vector<double> solution, string name) {
        int score = 0;
        if (solution.size() != 1) {

            for (int i : cur_equal.solve()) {
                if (x != solution[])
            }
        }
    }
};

int main() {
    srand(time(nullptr));
//    freopen("tasks.txt","r+",stdin);
//    cout<<rand()%100<<endl<<rand()%100;
    return 0;
}
