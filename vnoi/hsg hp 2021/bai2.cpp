#include<iostream>

using namespace std;

bool nt(int n) {
    if(n < 2) return false;
    for(int i = 2; i * i <= n; ++i) {
        if(n % i == 0) return false;
    }
    return true;
}

bool check(int n) {
    if(!nt(n)) return false;
    bool cs = true;
    for(int i = 1; i <= 9; i += 2) {
        if(nt(n * 10 + i)) {
            cs = false;
            break;
        }
    }
    if(cs) return false;
    while(n > 9) {
        if(!nt(n / 10)) return false;
        n /= 10;
    }
    return true;
}

bool *prime = new bool[10000001];

bool check2(int n) {
    if(!prime[n]) return false;
    bool cs = true;
    for(int i = 1; i <= 9; i += 2) {
        if(prime[n * 10 + i]) {
            cs = false;
            break;
        }
    }
    if(cs) return false;
    while(n > 9) {
        if(!prime[n / 10]) return false;
        n /= 10;
    }
    return true;
}


int main() {
    int n; cin >> n;
    if(n <= 1000){
        int a[n];
        for(int i = 0; i < n; ++i) cin >> a[i];
        int b[n + 1];
        b[0] = 0;
        for(int i = 0; i < n; ++i) {
            b[i + 1] = 0;
            if(check(a[i])) b[i + 1] = 1;
        }
        for(int i = 1; i <= n; ++i) {
            b[i] = b[i - 1] + b[i];
        }
        int t; cin >> t;
        for(int i = 1; i <= t; ++i) {
            int u, v; cin >> u >> v;
            cout << b[v] - b[u - 1] << endl;
        }
        return 0;
    }
    else {
        for(int i = 2; i < 10000001; ++i) prime[i] = true;
        prime[0] = false;
        prime[1] = false;
        for(int i = 2; i * i < 10000001; ++i) {
            if(prime[i]) {
                for(int j = i * i; j < 10000001; j += i) {
                    prime[j] = false;
                }
            }
        }
        int a[n];
        for(int i = 0; i < n; ++i) cin >> a[i];
        int b[n + 1];
        b[0] = 0;
        for(int i = 0; i < n; ++i) {
            b[i + 1] = 0;
            if(check2(a[i])) b[i + 1] = 1;
        }
        for(int i = 1; i <= n; ++i) {
            b[i] = b[i - 1] + b[i];
        }
        int t; cin >> t;
        for(int i = 1; i <= t; ++i) {
            int u, v; cin >> u >> v;
            cout << b[v] - b[u - 1] << endl;
        }
        return 0;
    }
}