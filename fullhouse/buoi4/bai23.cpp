#include<iostream>

using namespace std;

int main() {
    long long n;
    cin >> n;
    long long b = 0;
    long long b1 = 1;
    long long b2 = 1;
    for(long long i = 1; i <= n - 1; i++) {
        b = b1;
        b1 = b2;
        b2 = b + b1;
    }
    cout << b;
    return 0;
}