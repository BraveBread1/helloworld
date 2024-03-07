#include<iostream>

using namespace std;

int main() {
    int n; cin >> n;
    short b[10000001];
    for(int i = 0; i < 10000001; ++i) b[i] = 0;
    int a[n];
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        ++b[a[i]];
    }
    for(int i = 0; i < 10000001; ++i) {
        if(b[i]) cout << i << " " << b[i] << endl;
    }
    for(int i = 0; i < n; ++i) {
        if(b[a[i]]) {
            cout << a[i] << " " << b[a[i]] << endl;
            b[a[i]] = 0;
        }
    }
    return 0;
}