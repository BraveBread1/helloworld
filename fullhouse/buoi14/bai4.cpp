#include<iostream>
#include<cmath>
using namespace std;

int tong(int n) {
    if(n == 1) return -1;
    return n * pow(-1, n) + tong(n - 1);
}

int main() {
    int n; cin >> n;
    cout << tong(n);
    return 0;
}