#include<iostream>

using namespace std;

bool fib(long long n) {
    long long b = 0;
    long long b1 = 1;
    long long b2 = 1;
    while(b <= n){
        if(b == n) return true;
        b = b1;
        b1 = b2;
        b2 = b + b1;
    }
    return false;
}
int main() {
    long long n; cin >> n;
    if(fib(n)) cout << "YES";
    else cout << "NO";
    return 0;
}