#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>

using namespace std;

void nhap(vector <int> &a, int n) {
    for(int i = 0; i < n; ++i) {
        int x; cin >> x;
        a.push_back(x);
    }
}

void xuat(const vector <int> a, int n) {
    for(int i = 0; i < n; ++i) cout << a[i] << " ";
    cout << endl;
}

int tong(int n) {
    int tong = 0;
    while(n != 0) {
        if(abs(n) > 10) tong += abs(n % 10);
        else {
            tong += n % 10;
        }
        n /= 10;
    }
    return tong;
}

bool sort_abs(int a, int b) {
    return abs(a) < abs(b);
}

bool sort_abs2(int a, int b) {
    if(a + b == 0) return a < b;
    else return abs(a) < abs(b);
}

bool sort_tongcs(int a, int b) {
    return tong(a) < tong(b);
}

bool sort_tongcs2(int a, int b) {
    if(tong(a) == tong(b)) return a > b;
    else return tong(a) < tong(b);
}

bool sort_chan_le(int a, int b) {
    return abs(a % 2) < abs(b % 2);
}

bool sort_chan_le2(int a, int b) {
    if(abs(a % 2) == 0 && abs(b % 2) == 0) return a > b;
    else if(abs(a % 2) == 1 && abs(b % 2) == 1) return a < b;
    else return abs(a % 2) < abs(b % 2);
}

int main() {
    int n; cin >> n;
    vector <int> a;
    nhap(a, n);
    sort(a.begin(), a.end(), sort_abs);
    xuat(a, n);
    sort(a.begin(), a.end(), sort_abs2);
    xuat(a, n);
    sort(a.begin(), a.end(), sort_tongcs);
    xuat(a, n);
    sort(a.begin(), a.end(), sort_tongcs2);
    xuat(a, n);
    sort(a.begin(), a.end(), sort_chan_le);
    xuat(a, n);
    sort(a.begin(), a.end(), sort_chan_le2);
    xuat(a, n);
    return 0;
}