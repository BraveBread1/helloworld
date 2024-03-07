#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    double tong = 0;
    for (int i = 1; i <= n; i++) {
        tong += 1 / ( 2.0 * i);
    }
    cout << setprecision(2) << fixed << tong << endl;
    return 0;
}