#include<iostream>

using namespace std;

int main() {
    int n; cin >> n;
    int a[n][n];
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) cin >> a[i][j];
    }
    for(int i = 0; i < n; ++i) {
        int x = a[i][i];
        a[i][i] = a[i][n - 1 - i];
        a[i][n - 1 - i] = x;
    }
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}   