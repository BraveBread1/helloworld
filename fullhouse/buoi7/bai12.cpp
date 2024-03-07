#include<iostream>

using namespace std;

int main() {
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    short b[10000001];
    int max = 0;
    int giatri = 0;
    for(int i = 0; i < 10000001; ++i) b[i] = 0;
    for(int i = 0; i < n; ++i) {
        ++b[a[i]];
    }
    for(int i = 0; i < n; ++i) {
        if(b[a[i]] > max) {
            max = b[a[i]];
            giatri = a[i];
        }
    }
    cout << giatri << " " << max;
    return 0;
}