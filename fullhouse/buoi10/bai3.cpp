#include<iostream>

using namespace std;

void scan(int a[], int n) {
    for(int i = 0; i < n; ++i) cin >> a[i];
}

int main() {
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    scan(a, n);
    scan(b, m);
    int dem1 = 0, dem2 = 0;
    int h[n + m];
    while(dem1 < n && dem2 < m) {
        if(a[dem1] <= b[dem2]) {
            h[dem1 + dem2] = a[dem1];
            ++dem1;
        }
        else {
            h[dem1 + dem2] = b[dem2];
            ++dem2;
        }
    }
    if(dem1 < n) {
        while(dem1 < n) {
            h[dem1 + dem2] = a[dem1];
            ++dem1;
        }
    }
    else if(dem2 < m) {
        while(dem2 < m) {
            h[dem1 + dem2] = b[dem2];
            ++dem2;
        }
    }
    for(int i = 0; i < n + m; ++i) cout << h[i] << " ";
    return 0;
}