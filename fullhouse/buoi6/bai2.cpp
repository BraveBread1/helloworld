#include<iostream>
#include<math.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    long long b = 0;
    long long b1 = 1;
    long long b2 = 1;
    for(n; n > 0; n--) {
        cout << b << endl;
        b = b1;
        b1 = b2;
        b2 = b + b1;
    }
    return 0;
}