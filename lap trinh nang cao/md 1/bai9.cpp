#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    double p = (a + b + c) / 2;
    if(a + b <= c || a + c <= b || b + c <= a) {
        cout << "invalid";
        return 0;
    }
    double s = sqrt(p * (p - a) * (p - b) * (p - c));
    cout << fixed << setprecision(2) << s;
    return 0;
}