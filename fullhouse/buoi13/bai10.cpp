#include<iostream>

using namespace std;

int mod = 1e9 + 7;

long long ** createMatrix(long long rows, long long cols) {
    long long ** a = new long long *[rows];
    for(long long i = 0; i < rows; ++i) {
        a[i] = new long long [cols];
    }
    return a;
}

long long ** binh(long long **a, long long n) {
    long long ** tich = createMatrix(n, n);
    for(long long i = 0; i < n; ++i) {
        for(long long j = 0; j < n; ++j) {
            tich[i][j] = 0;
            for(long long x = 0; x < n; ++x) {
                tich[i][j] += a[i][x] * a[x][j];
                tich[i][j] %= mod;
            }
        }
    }
    return tich;
}

long long ** nhan(long long **a, long long ** b, long long n){
    long long **tich = createMatrix(n, n);
    for(long long i = 0; i < n; ++i){
        for(long long j = 0; j < n; ++j) {
            tich[i][j] = 0;
            for(long long x = 0; x < n; ++x) {
                tich[i][j] += a[i][x] * b[x][j];
                tich[i][j] %= mod;
            }
        }
    }
    return tich;
}

void nhap(long long ** a, long long n) {
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }
}

void in(long long **a, long long n) {
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

long long ** mu(long long ** a, long long k, long long n) {
    if(k == 1) {
        return a;
    }
    else if(k % 2 == 1) {
        return nhan(binh(mu(a, k / 2, n), n), a, n);
    }
    else {
        return binh(mu(a, k / 2, n), n);
    }
}

int main() {
    long long n, k;
    cin >> n >> k;
    long long ** a = createMatrix(n, n);
    nhap(a, n);
    a = mu(a, k , n);
    in(a, n);
    return 0;
}