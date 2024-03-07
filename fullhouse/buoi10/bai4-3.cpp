#include<iostream>
#include<vector>

using namespace std;

void nhap(vector<long long> &a, int n) {
    for(int i = 1; i <= n; ++i) {
        int x; cin >> x;
        a.push_back(x);
    }
}

void mang_cong_don(vector <long long> &a, int n) {
    for(int i = 1; i <= n; ++i) {
        a[i] += a[i - 1];
    }
}

void truy_van(vector <long long> a) {
    int i, j;
    cin >> i >> j;
    cout << a[j] - a[i - 1] << endl;;
}

int main() {
    int n; cin >> n;
    vector <long long> a = {0};
    nhap(a, n);
    mang_cong_don(a, n);
    int q; cin >> q;
    for(int i = 1; i <= q; ++i) truy_van(a);
    return 0;
}