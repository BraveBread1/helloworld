#include<iostream>

using namespace std;

int main() {
    int n, m, p; cin >> n >> m >> p;
    long long a[n][m];
    long long b[m][p];
    for(long long i = 0; i < n; ++i) {
        for(long long j = 0; j < m; ++j) cin >> a[i][j];
    }
    for(long long i = 0; i < m; ++i) {
        for(long long j = 0; j < p; ++j) cin >> b[i][j];
    }
    long long tich[n][p];
    for(long long i = 0; i < n; ++i) {
        for(long long j = 0; j < p; ++j) {
            tich[i][j] = 0;
            for(long long x = 0; x < m; ++x) {
                tich[i][j] += a[i][x] * b[x][j];
            }
            cout << tich[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}