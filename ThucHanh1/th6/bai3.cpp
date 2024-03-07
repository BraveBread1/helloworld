#include<iostream>

using namespace std;

void nhapmang(int n, int a[]) {
    for(int i = 0; i < n; ++i) cin >> a[i];
}

void dem(int n, int a[]) {
    for(int i = 0; i <= 9; ++i) {
        int dem = 0;
        for(int x = 0; x < n; ++x) {
            if(a[x] == i) ++dem;
        }
        if(dem > 0) cout << "so " << i << " xuat hien " << dem << " lan" << endl;
    }
}

int main() {
    int n; cin >> n;
    int a[n];
    nhapmang(n, a);
    dem(n, a);
    return 0;
}