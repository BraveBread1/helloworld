#include<iostream>

using namespace std;

int main() {
    long long n; cin >> n;
    unsigned long long tich = 1;
    for(long long i = 1; i <= n; i = i + 1) {
        long long a; cin >> a;
        tich = tich * a;
        tich = tich % 1000000007;
    }
    cout << tich;
    return 0;
}