#include<iostream>

using namespace std;

int main() {
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    long long dem = 0;
    for(int i = 0; i < n - 1; ++i) {
        while(a[i] >= a[i + 1]) {
            ++a[i + 1];
            ++dem;
        }
    }
    cout << dem;
    return 0;
}