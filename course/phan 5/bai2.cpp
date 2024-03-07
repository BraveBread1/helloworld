#include<iostream>

using namespace std;

int main() {
    int m, n, q;
    cin >> m >> n >> q;
    int a[m][n];
    for(int i = 0; i < m; ++i) {
        for(int j = 0; j < n; ++j) cin >> a[i][j];
    }
    for(int x = 1; x <= q; ++x) {
        int i, j; cin >> i >> j;
        cout << a[i - 1][j - 1] << endl;
    }
    return 0;
}