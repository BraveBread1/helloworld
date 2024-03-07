#include<iostream>

using namespace std;

int main() {
    int t; cin >> t;
    for(t; t > 0; --t) {
        int n, m; cin >> n >> m;
        int a[n + 1];
        for(int i = 1; i <= n ;++i) {
            cin >> a[i];
        }
        int b[m + 1];
        for(int i = 1; i <= m; ++i) {
            cin >> b[i];
        }
        int x[m + 1][n + 1];
        for(int i = 1; i <= m; ++i) {
            for(int j = 1; j <= n; ++j) {
                x[i][j] = b[i] - a[j];
            }
        } 
        for(int i = 1; i <= m; ++i) {
            for(int j = 1; j <= n; ++j) {
                cout << x[i][j] << " ";
            }
            cout << endl;
        } 
    }
}