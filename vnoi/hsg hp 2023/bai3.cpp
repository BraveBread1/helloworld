#include<iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    bool prime[1300000];
    for(int i = 0; i < 1300000; ++i) prime[i] = true;
    prime[0] = false;
    prime[1] = false;
    for(int i = 2; i * i < 1300000; ++i) {
        if(prime[i]) {
            for(int j = i * i; j < 1300000; j += i) prime[j] = false;
        }
    }
    int n, m; cin >> n >> m;
    int a[n + 1];
    for(int i = 1; i <= n; ++i) cin >> a[i];
    int sum[n + 1];
    sum[0] = 0;
    for(int i = 1; i <= n; ++i) {
        sum[i] = sum[i - 1] + a[i];
    }
    bool result[m + 1];
    for(int i = 1; i <= m; ++i) {
        int u, v; cin >> u >> v;
        int x = sum[v] - sum[u - 1];
        if(x < 0) result[i] = 0;
        else if(prime[x]) result[i] = 1;
        else result[i] = 0;
    }
    for(int i = 1; i <= m; ++i) {
        if(result[i]) cout << "1" << endl;
        else cout << "0" << endl;
    }
    return 0;
}