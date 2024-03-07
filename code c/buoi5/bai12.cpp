#include<iostream>

using namespace std;

int tong_chu_so (int n) {
    int tong = 0;
    for(int i = n; i > 0; i /= 10) {
        tong += i % 10;
    }
    return tong;
}

int main() {
    int n; cin >> n;
    bool a[n + 1];
    for(int i = 0; i <= n; ++i) a[i] = true;
    a[0] = false;
    a[1] = false;
    int dem = 0;
    for(int i = 2; i <= n; ++i) {
        if(a[i]) {
            for(int b = i * i; b <= n; b += i) a[b] = false;
        }
    }
    for(int i = 2; i <= n; ++i) {
        if(a[i] && tong_chu_so(i) % 5 == 0) {
            cout << i << " ";
            ++dem;
        }
    }
    cout << endl << dem;
    return 0;
}