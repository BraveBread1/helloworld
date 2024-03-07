#include<iostream>

using namespace std;

long long toHop(int n, int k) {
    if(k == 0) return 1;
    if(n == k) return 1;
    return toHop(n - 1, k - 1) + toHop(n - 1, k);
}

int main() {
    int n; cin >> n;
    int k; cin >> k;
    cout << toHop(n, k);
    return 0;
}