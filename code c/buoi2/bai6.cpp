#include<iostream>
#include<math.h>

using namespace std;

int main() {
    long long n;
    int a, b;
    cin >> n >> a >> b;
    int tong;
    if ( n % 2 == 0) {
        if ( a <= b / 2) {
            tong = n * a;
        }
        else {
            tong = n / 2 * b;
        }
    }
    else {
        if ( a <= b / 2) {
            tong = n * a;
        }
        else {
            tong = n / 2 * b + a;
        }
    }
    cout << tong << endl;
    return 0;
}