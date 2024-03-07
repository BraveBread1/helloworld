#include<iostream>

using namespace std;

void nhapmang(int n, int a[]) {
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }
}

double tinhTB(int n, int a[]){
    double tong = 0;
    for(int i = 0; i < n; ++i) tong += a[i];
    return tong / n;
}

double tinhphuongsai(int n, int a[], double TB) {
    double tong = 0;
    for(int i = 0; i < n; ++i) {
        tong += (a[i] - TB) * (a[i] - TB);
    }
    return tong / n;
}
int main() {
    int n; cin >> n;
    int a[n];
    nhapmang(n, a);
    double giatriTB = tinhTB(n, a);
    double phuongsai = tinhphuongsai(n, a, giatriTB);
    cout << "gia tri tb la: " << giatriTB << endl;
    cout << "gia tri phuong sai la: " << phuongsai << endl;
    return 0;
}