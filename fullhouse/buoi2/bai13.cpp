#include<iostream>
#include<iomanip>

using namespace std;

int main () {
    long long n; cin >> n;
    double tong = 1.0 * n / (n + 1);
    cout << fixed << setprecision(4) << tong;
    return 0;
}