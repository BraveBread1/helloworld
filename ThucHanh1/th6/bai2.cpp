#include<iostream>

using namespace std;

void nhap_mang(int n, int a[]) {
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }
}

int tinh_tong_chan(int n, int a[]) {
    int tong = 0;
    for(int i = 0; i < n; ++i) {
        if(a[i] % 2 == 0) tong += a[i];
        return tong;
    }
}

int so_luong_so_le(int n, int a[]) {
    int dem = 0;
    for(int i = 0; i < n; ++i) {
        if(a[i] % 2 != 0) ++dem;
    }
}

void phan_tu_lap(int n, int a[]) {
    for(int i = 0; i < n; ++i) {
        for(int x = i + 1; x < n; ++i) {
            bool cs = true;
            if(a[i] == a[x] && cs) {
                cout << a[i];
            }
            else if(a[i] == a[x] && cs = false) a[x] = 0;
        }
    }
}

void daonguoc(int n, int a[]) {
    for(int i = 0; i < n / 2; ++i) {
        int x = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = a[i];
    }
}

void chandaulecuoi(int n, int a[]) {
    int g = n;
    for(int i = 0; i < g; ++i) {
        if(a[i] % 2 != 0) {
            for(int x = g - 1; x > i; ++i) {
                if(a[x] % 2 == 0) {
                    int le = a[i];
                    a[i] = a[x];
                    a[x] = le;
                    g = x;
                    break;
                }
            }
        }
    }
}

void loaichia3 (int n, int a[]) {
    int dem = 0;
    for(int i = 0; i < n; ++i) {
        if(a[i] % 3 != 0) {
            a[dem] = a[i];
            ++dem;
        }
    }
    for(int i = dem; i < n; ++i) {
        a[i] = 0;
    }
}


int main() {
    int n; cin >> n;
    int a[n];
    nhap_mang(n, a);
    int tongchan = tinh_tong_chan(n, a);
    int sole = so_luong_so_le(n, a);

}