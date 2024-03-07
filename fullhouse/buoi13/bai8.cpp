#include<iostream>

using namespace std;

bool fiboCheck(long long n) {
    long long b1 = 1, b2 = 1;
    long long b = 2;
    while(b < n) {
        b1 = b2;
        b2 = b;
        b = b1 + b2;
    }
    return b == n;
}

int main() {
    long long n; cin >> n;
    if(fiboCheck(n)) cout << "YES";
    else cout << "NO";
    return 0;
}