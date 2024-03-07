#include<iostream>
#include<cmath>

using namespace std;

int cnt(int x, int n, int current) {
    if(x == 0) return 1;
    int ans = 0;
    for(int i = current + 1; pow(i, n) <= x; ++i) {
        ans += cnt(x - pow(i, n), n, i);
    }
    return ans;
}

int main() {
    int x, n; cin >> x >> n;
    cout << cnt(x, n, 0) << endl;
    return 0;
}