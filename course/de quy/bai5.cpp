#include<iostream>

using namespace std;

int binh(int n) {
    return n * n;
}

long long sum(int n) {
    if(n == 1) return 1;
    return binh(n) + sum(n - 1);
}

int main() {
    int n; cin >> n;
    cout << sum(n);
    return 0;
}