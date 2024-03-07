#include<iostream>
#include<math.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    int chan = 0;
    int le = 0;
    while (n != 0) {
        int du = n % 10;
        if ( n % 2 == 0) {
            chan ++;
        }
        else  {
            le ++;
        }
        n /= 10;
    }
    if ( chan == le) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}