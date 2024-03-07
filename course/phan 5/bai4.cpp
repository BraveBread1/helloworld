#include<iostream>
#include<iomanip>

using namespace std;

int main() {
    int n; cin >> n;
    double a[n];
    double tong = 0;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        tong += a[i];
    }
    double avr = tong / n;
    for(int i = 0; i < n; ++i) {
        if(a[i] > avr) cout << fixed << setprecision(2) << a[i] << " ";
    }
    return 0;

}