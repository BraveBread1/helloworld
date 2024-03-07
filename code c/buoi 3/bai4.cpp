#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;
    double tong = 0;
    for ( int i = 1; i <= n; i += 1) {
        tong = tong + 1 / ( 1.0 * i);
    }
    cout << setprecision(3) << fixed << tong;
    return 0;
}