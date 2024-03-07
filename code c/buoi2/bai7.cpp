#include<iostream>
#include<math.h>

using namespace std;

int main() {
    int n, s;
    cin >> n >> s;
    if ( s < n) {
        cout << "1" << endl;
    }
    else {
        int thuong = s / n;
        if( s % n == 0) {
            cout << thuong << endl;
        }
        else {
            cout << thuong + 1 << endl;
        }
    }
    return 0;
}