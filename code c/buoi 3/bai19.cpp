#include<iostream>
#include<math.h>

using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    long long so = pow(10, n - 1);
    while(so % t != 0) {
        so ++;
        if ( so >= pow(10, n)) {
            cout << "-1" << endl;
            break;
        }
    }
    cout << so << endl;
    return 0;
}