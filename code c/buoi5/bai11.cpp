#include<iostream>

using namespace std;

bool fib(int n) {
    int b1 = 0;
    int b2 = 1;
    int b3 = 1;
    while(b1 <= n) {
        if(b1 == n) return true;
        b1 = b2; b2 = b3; b3 = b1 + b2;
    }
    return false;
}

int main() {
    int n; cin >> n;
    if(fib(n)) cout << "1";
    else cout << "0";
    return 0;
}