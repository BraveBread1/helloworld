#include<iostream>
#include<math.h>

using namespace std;

int main () {
    int a, b, c;
    cin >> a >> b >> c;
    int tong;
    if (a + b <= c) {
        tong = 2 * (a + b);
    }
    else if ( a + c <= b) {
        tong = 2 * (a + c);
    }
    else if (b + c <= a) {
        tong = 2 * (b + c);
    }
    else {
        tong = a + b + c;
    }
    cout << tong << endl;
    return 0;
}