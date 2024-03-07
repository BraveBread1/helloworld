#include<iostream>

using namespace std;

int slcs(long long n) {
    if(n < 10) return 1;
    return 1 + slcs(n / 10);
}

int main() {
    long long n; cin >> n;
    cout << slcs(n);
    return 0;
}