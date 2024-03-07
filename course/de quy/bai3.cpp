#include<iostream>
#include<cmath>

using namespace std;

int sum(int n) {
    if(n == 1) return 1;
    return pow(-1, n + 1) * n + sum(n - 1);
}

int main() {
    int n; cin >> n;
    cout << sum(n);
    return 0;
}