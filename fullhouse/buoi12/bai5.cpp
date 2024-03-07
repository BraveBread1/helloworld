#include<iostream>

using namespace std;

bool nto(long long n) {
    if(n < 2) return false;
    for(int i = 2; i * i <= n; ++i) {
        if(n % i == 0) return false;
    }
    return true;
}

int main() {
    int n; cin >> n;
    long long a[n][n];
    long long prime[n * n];
    int dem = 0;
    long long i = 2;
    while(dem < n * n) {
        if(nto(i)) {
            prime[dem] = i;
            ++dem;
        }
        ++i;
    }
    int count = 0;
    int h1 = 0, h2 = n - 1, c1 = 0, c2 = n - 1;
    while(h1 <= h2) {
        for(int i = c1; i <= c2; ++i) {
            a[h1][i] = prime[count];
            ++count;
        }
        for(int i = h1 + 1; i <= h2; ++i) {
            a[i][c2] = prime[count];
            ++count;
        }
        for(int i = c2 - 1; i >= c1; --i) {
            a[h2][i] = prime[count];
            ++count;
        }
        for(int i = h2 - 1; i > h1; --i) {
            a[i][c1] = prime[count];
            ++count;
        }
        ++h1; ++c1; --h2; --c2;
    } 
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}