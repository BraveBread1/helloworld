#include<iostream>

using namespace std;

void nhapmang(int n, int a[]) {
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }
}

void coutingsort(int a[], int b[],int c[], int n){
    for(int i = 0; i < n; ++i) {
        ++b[a[i]];
    }
    for(int i = 1; i < 100001; ++i) {
        b[i] += b[i - 1];
    }
    for(int i = 0; i < n; ++i) {
        c[b[a[i]]- 1] = a[i];
        --b[a[i]];
    }
    for(int i = 0; i < n; ++i) cout << c[i] << " ";
}

int main() {
    int n; cin >> n;
    int a[n];
    int c[n];
    int b[100001];
    for(int i = 0; i < n; ++i) b[i] = 0;
    nhapmang(n, a);
    coutingsort(a, b, c, n);
    return 0;
}