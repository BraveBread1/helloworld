#include<iostream>

using namespace std;

int main() {
    int n; cin >> n;
    long long fibo[n * n + 1];
    fibo[0] = 0;
    fibo[1] = 1;
    long long a[n][n];
    for(int i = 2; i < n * n + 1; ++i) {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    int dem = 0;
    int h1 = 0, h2 = n - 1, c1 = 0, c2 = n - 1;
    while(h1 <= h2) {
        for(int i = c1; i <= c2; ++i) {
            a[h1][i] = fibo[dem];
            ++dem;
        }
        for(int i = h1 + 1; i <= h2; ++i) {
            a[i][c2] = fibo[dem];
            ++dem;
        }
        for(int i = c2 - 1; i >= c1; --i) {
            a[h2][i] = fibo[dem];
            ++dem;
        }
        for(int i = h2 - 1; i > h1; --i) {
            a[i][c1] = fibo[dem];
            ++dem;
        }
        ++h1; --h2; ++c1; --c2;
    }
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}