#include<iostream>

using namespace std;

bool bs(int a[], int l, int r, int x) {
    if(l > r) return false;
    int m = (l + r) / 2;
    if(a[m] == x) return true;
    else if(a[m] > x) return bs(a, l, m - 1, x);
    else return bs(a, m + 1, r, x);
}

int main() {
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    int t; cin >> t;
    for(int i = 1; i <= t; ++i) {
        int x; cin >> x;
        if(bs(a, 0, n - 1, x)){
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}