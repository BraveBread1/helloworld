#include<iostream>

using namespace std;

const int mod = 1000000007;

long long binh(long long n) {
    return n * n % mod;
}
long long luyThua(int a, int b) {
    if(b == 0) return 1;
    else if(b % 2 == 0) return binh(luyThua(a, b / 2));
    else if(b % 2 != 0) return (binh(luyThua(a, b / 2)) * a) % mod;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << luyThua(a, b);
    return 0;
}