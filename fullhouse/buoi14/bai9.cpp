#include<iostream>
#include<iomanip>
using namespace std;

double tong(double n) {
    if(n == 1) return 1;
    return 1 / n + tong(n - 1);
}

int main() {
    double n; cin >> n;
    cout << fixed << setprecision(3) << tong(n);
    return 0;
}