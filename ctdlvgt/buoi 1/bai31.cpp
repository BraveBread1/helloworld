#include<iostream>

using namespace std;

long long phieuler(long long n) {
    long long nghiem = n;
    for(int i = 2; i * i <= n; ++i) {
        if(n % i == 0) {
            while(n % i == 0) {
                n /= i;
            }
            nghiem -= nghiem / i;
        }
    }
    if(n > 1) nghiem -= nghiem / n;
    return nghiem;
}

int main() {
    long long n; cin >> n;
    cout << phieuler(n);
    return 0;
}