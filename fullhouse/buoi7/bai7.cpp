#include<iostream>

using namespace std;

int main() {
    int n; cin >> n;
    long long a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    long long tich1, tich2;
    for(int i = 0; i < n; ++i) {
        tich1 = a[i] * a[i + 1];
        tich2 = a[i] * a[i - 1];
        if(tich1 < 0 || tich2 < 0) {
            cout << a[i] << " ";
        }
    }
    return 0;
}