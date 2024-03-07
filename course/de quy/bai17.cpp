#include<iostream>

using namespace std;

int dem(int n, int x) {
    if(n == 0) return 1;
    int ans = 0;
    for(int i = x + 1; i <= n; ++i) {
        ans += dem(n - i, i);
    }
    return ans;
}

int main() {
    int n; cin >> n;
    cout << dem(n, 0) << endl;
    return 0;
}