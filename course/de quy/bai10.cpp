#include<iostream>

using namespace std;

long long s[10000];

long long sum(int n) {
    if(n == 1) return 1;
    return s[n] + sum(n - 1);
}

int main() {
    int n; cin >> n;
    s[0] = 0;
    for(int i = 1; i <= n; ++i) {
        s[i] = s[i - 1] + i;
    }
    cout << sum(n);
    return 0;
}