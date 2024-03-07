#include<iostream>

using namespace std;

long long sum(int n) {
    if(n == 0) return 1;
    if(n == 1) return 1;
    return 2 * sum(n - 1) + sum(n - 2) + 1;
}

int main() {
    int n; cin >> n;
    cout << sum(n);
    return 0;
}