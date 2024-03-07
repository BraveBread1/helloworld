#include<iostream>

using namespace std;

int main() {
    long long tong;
    int n; cin >> n;
    for(int i = 1; i <= n; ++i) tong += i;
    cout << tong;
    return 0;
}