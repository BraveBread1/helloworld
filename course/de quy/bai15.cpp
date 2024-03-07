#include<iostream>

using namespace std;

long long factor(int n) {
    if(n == 1) return 1;
    return n * factor(n - 1);
}

int main() {
    int n; cin >> n;
    cout << factor(n);
    return 0;
}