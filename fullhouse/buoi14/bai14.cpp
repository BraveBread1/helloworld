#include<iostream>

using namespace std;

int tongcs(long long n) {
    if(n < 10) return n;
    return n % 10 + tongcs(n / 10);
}

int main() {
    long long n; cin >> n;
    cout << tongcs(n);
    return 0;
}