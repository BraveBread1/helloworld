#include<iostream>

using namespace std;

bool nto(int n) {
    if(n < 2) return false;
    for(int i = 2; i * i <= n; ++i) {
        if(n % i == 0) return false;
    }
    return true;
}

int main() {
    int n, m; cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) cin >> a[i][j];
    }
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) if(nto(a[i][j])) cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}