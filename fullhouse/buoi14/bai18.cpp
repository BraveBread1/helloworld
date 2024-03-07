#include<iostream>

using namespace std;

bool symmetricArray(int a[], int l, int r) {
    if(l >= r) return true;
    if(a[l] != a[r]) return false;
    return symmetricArray(a, l + 1, r - 1);
}

int main() {
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    if(symmetricArray(a, 0, n - 1)) {
        cout << "YES";
    }
    else cout << "NO";
    return 0;
}