#include<iostream>

using namespace std;

int main() {
    int n; cin >> n;
    int a[n][n];
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) cin >> a[i][j];
    }
    int u, v; cin >> u >> v;
    for(int i = 0; i < n; ++i) {
        int tmp = a[i][u - 1];
        a[i][u - 1] = a[i][v - 1];
        a[i][v - 1] = tmp;
    }
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}