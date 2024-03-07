#include<iostream>

using namespace std;

int main() {
    long long n, m; cin >> n >> m;
    long long a[n][m];
    for(long long i = 0; i < n; ++i) {
        long long tong = 0;
        for(long long j = 0;j < m; ++j) {
            cin >> a[i][j];
            tong += a[i][j];
        }
        cout << tong << " ";
    }
    cout << endl;
    for(long long j = 0; j < m; ++j) {
        long long tong = 0;
        for(long long i = 0; i < n; ++i) tong +=a[i][j];
        cout << tong << " ";
    }
    return 0;
}