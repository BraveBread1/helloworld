#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    int a[n], b[m];
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < m; ++i) cin >> b[i];
    sort(a, a + n);
    sort(b, b + m);
    int dem1 = 0;
    int dem2 = 0;
    int dem = 0;
    while(dem1 < n && dem2 < m) {
        if(a[dem1] <= b[dem2]) ++dem1;
        else {
            ++dem;
            ++dem1;
            ++dem2;
        }
    }
    cout << dem;
    return 0;
}