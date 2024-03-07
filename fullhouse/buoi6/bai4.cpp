#include<iostream>

using namespace std;

long long binh(long long n) {
    return n * n;
}

long long du(long long a, long long b, long long mod) {
    if(b == 0) return 1 % mod;
    else if(b % 2 == 0) {
        return binh(du(a, b / 2, mod)) % mod;
    }
    else return a * (binh(du(a, b / 2, mod)) % mod) % mod;
}

int main() {
    long long a, b;
    cin >> a >> b;
    cout << du(a, b, 1000000007);
    return 0;
}