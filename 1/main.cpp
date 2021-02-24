#include <iostream>
#include <bits/stdc++.h>
#include <math.h>

using namespace std;
class equal1 {
public:
    double a;
    double b;
    double c;

    double d(){
        return(b*b-4*a*c);
    };

    pair<double, double> slowe (){
        if ( d()>=0) {
            pair<double, double> ans;
//            cerr<<(-b - sqrt(d())) / (2 * a)<<endl;
            ans.first = (-b - sqrt(d())) / (2 * a);
            ans.second = (-b + sqrt(d())) / (2 * a);
            return (ans);
        }
        else {
            cerr << "мнимые корни ведиете новые кофициенты  a,b,c" << endl;
            cin>>a>>b>>c;
        }
    }
};

int main() {
    cout << "Hello, World! введите коэфиценты a, b, c при x^2,x,x^0 в ax^2+bx+c=0 "  << endl;
    equal1 my;
    cin>>my.a>>my.b>>my.c;
    cout<<"anwer x1="<<my.slowe().first<<endl<<" x2="<<my.slowe().second<<endl;
    return 0;
}
