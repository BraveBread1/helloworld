#include<iostream>

using namespace std;

bool checkfib(long long n) {
    long long b = 0;
    long long b1 = 1;
    long long b2 = 1;
    while(b <= n) {
        if(n == b) return true;
        b = b1;
        b1 = b2;
        b2 = b + b1;
    }
    return false;
}

int main() {
    int n; cin >> n;
    long long a[n];
    int dem = 0;
    for(long long &i : a) cin >> i;
    for(long long i = 0; i < n; ++i) if(checkfib(a[i])) {
        cout << a[i] << " ";
        ++dem;
    }
    if(dem == 0) cout << "NONE";
    return 0;
}