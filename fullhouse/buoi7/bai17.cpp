#include<iostream>

using namespace std;

int main() {
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < n / 2; ++i) {
        if(a[i] != a[n - i - 1]) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}