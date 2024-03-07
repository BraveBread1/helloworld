#include<iostream>

using namespace std;

int main() {
    int n, x, index;
    cin >> n >> x >> index;
    int a[n + 1];
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = n; i >= index - 1; --i) {
        a[i] = a[i - 1];
    }
    a[index - 1] = x;
    for(int i = 0; i <= n; i++) cout << a[i] << " ";
    return 0;
}