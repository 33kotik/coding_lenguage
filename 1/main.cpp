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

    pair<double, double> slowe() {
        if (d() >= 0) {
            pair<double, double> ans;
//            cerr<<(-b - sqrt(d())) / (2 * a)<<endl;
            ans.first = (-b - sqrt(d())) / (2 * a);
            ans.second = (-b + sqrt(d())) / (2 * a);
            return (ans);
        } else {
            cerr << "мнимые корни ,ведиете новые кофициенты  a,b,c" << endl;
            cin >> a >> b >> c;
            return (slowe());
        }
    }

    void read_coefficient() {
        cout << "введите коэфиценты a, b, c при x^2,x,x^0 в ax^2+bx+c=0 " << endl;
        cin >> a >> b >> c;
    }

    void write_answer() {
        pair<double, double> ans = slowe();
        cout << " x1=" << ans.first << endl << " x2=" << ans.second << endl;
    }

    void write_equal() {
        string ans = to_string(a) + "x^2 + " + to_string(b) + "x + " + to_string(c);
        cout << ans << endl;
    }
};

int main() {

    equation my;
    while (true) {
        int c = 0;
        cout << "press 1 to read coefficient" << endl
             << "press 2 to write answer" << endl
             << "press 3 to write equal" << endl
             << "press 4 to stop" << endl;
        cin >> c;
        if (c == 1) {
            my.read_coefficient();
        }

        if (c == 2) {
            my.write_answer();
        }
        if (c == 3) {
            my.write_equal();
        }
        if (c == 4) {
            break;
        }
    }
    return 0;
}
