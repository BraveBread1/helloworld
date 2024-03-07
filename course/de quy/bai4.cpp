#include<iostream>

using namespace std;

long long factor[11];

long long sum(int n) {
    if(n == 1) return 1;
    return factor[n] + sum(n - 1);
}

int main() {
    int n; cin >> n;
    factor[1] = 1;
    for(int i = 2; i < 11; ++i) {
        factor[i] = i * factor[i - 1];
    }
    cout << sum(n);
    return 0;
}