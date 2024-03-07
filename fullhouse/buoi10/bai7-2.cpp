#include<iostream>

using namespace std;

int bs1(int a[], int n, int x) {
    int res = -1;
    int l = 0; int r = n - 1;
    while(l <= r) {
        int m = (l + r) / 2;
        if(a[m] == x) {
            res = m;
            r = m - 1;
        }
        else if(a[m] < x) {
            l = m + 1;
        }
        else {
            r = m - 1;
        }
    }
    return res;
}

int bs2(int a[], int n, int x) {
    int res = -1;
    int l = 0; int r = n - 1;
    while(l <= r) {
        int m = (l + r) / 2;
        if(a[m] == x) {
            res = m;
            l = m + 1;
        }
        else if(a[m] < x) {
            l = m + 1;
        }
        else {
            r = m - 1;
        }
    }
    return res;
}

int bs3(int a[], int n, int x) {
    int res = -1;
    int l = 0, r = n - 1;
    while(l <= r) {
        int m = (l + r) / 2;
        if(a[m] >= x) {
            res = m;
            r = m - 1;
        }
        else l = m + 1;
    }
    return res;
}

int bs4(int a[], int n, int x) {
    int res = -1;
    int l = 0, r = n - 1;
    while(l <= r) {
        int m = (l + r) / 2;
        if(a[m] > x) {
            res = m;
            r = m - 1;
        }
        else l = m + 1;
    }
    return res;
}
int main() {
    int n; cin >> n;
    int x; cin >> x;
    int a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    int x1 = bs1(a, n, x);
    int x2 = bs2(a, n, x);
    int x3 = bs3(a, n, x);
    int x4 = bs4(a, n, x);
    cout << x1 << endl << x2 << endl << x3 << endl << x4 << endl;
    if(x1 != -1) cout << x2 - x1 + 1;
    else cout << "0";
    return 0;
}