#include<iostream>

using namespace std;

bool nto(long long n) {
    if(n < 2) return false;
    for(long long i = 2; i * i <= n ; ++i) {
        if(n % i == 0) return false;
    }
    return true;
}

int main() {
    long long n; cin >>n;
    long long dem = 0;
    long long a[n];
    for(long long &x : a) cin >> x;
    for(long long x : a) if(nto(x)) ++dem;
    if(dem == 0) {
        cout << "NONE";
        return 0;
    }
    cout << dem;
    return 0;
}