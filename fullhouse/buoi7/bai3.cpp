#include<iostream>

using namespace std;

int main() {
    int n; cin >> n;
    int k; cin >> k;
    int a[n];
    int dem = 0;
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < n; ++i) {
        for(int x = i + 1; x < n; ++x) {
            if(a[i] + a[x] == k) ++dem;
        }
    }
    cout << dem;
    return 0;
}