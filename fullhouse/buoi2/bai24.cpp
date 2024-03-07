#include<iostream>

using  namespace std;

int main () {
    double a, b; cin >> a >> b;
    long long c = a;
    long long d = b;
    int dem = 0;
    if(a > c) dem = d - c;
    else dem = d - c + 1;
    cout << dem << endl;
}