#include<iostream>

using namespace std;

int main() {
    int n, m; cin >> n >> m;
    int a[n][m];
    int min = 1000000000, max = 0;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cin >> a[i][j];
            if(a[i][j] > max) max = a[i][j];
            else if(a[i][j] < min) min = a[i][j];
        }
    }
    cout << min << endl;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            if(a[i][j] == min) cout << i + 1 << " " << j + 1 << endl;
        }
    }
    cout << max << endl;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            if(a[i][j] == max) cout << i + 1 << " " << j + 1 << endl;
        }
    }
}