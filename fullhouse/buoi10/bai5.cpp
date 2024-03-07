#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
vector<short> g(10000001, 0);
void nhap(int a[], int n) {
    for(int i = 0; i < n; ++i) cin >> a[i];
}

void danh_dau(int a[], int n, vector<short> &g) {
    for(int i = 0; i < n; ++i) ++g[a[i]];
}

void giao(int b[], int m, vector<short> g){
    for(int i = 0; i < m; ++i) {
        if(g[b[i]]) {
            cout << b[i] << " ";
            g[b[i]] = 0;
        }
    }
    cout << endl;
}

int main() {
    int n, m; cin >> n >> m;
    int a[n], b[m];
    nhap(a, n);
    nhap(b, m);
    danh_dau(a, n, g);
    sort(b, b + m);
    giao(b, m, g);
    danh_dau(b, m, g);
    for(int i = 0; i < 10000001; ++i) {
        if(g[i] > 0) cout << i << " ";
    }
    return 0;
}