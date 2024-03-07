#include<iostream>
#include<vector>

using namespace std;

int main() {
    int n; cin >> n;
    int k; cin >> k;
    vector<int> v(n);
    vector<short> mangDanhDau(1000001, 0);
    for(int i = 0; i < n; ++i) {
        cin >> v[i];
        ++mangDanhDau[v[i]];
    }
    long long dem = 0;
    for(int i = 0; i < n; ++i) {
        if(k % 2 == 0 && v[i] == k / 2) {
            dem += mangDanhDau[k - v[i]] - 1;
            --mangDanhDau[v[i]];
        }
        else if(k > v[i] && mangDanhDau[k - v[i]]) {
            dem += mangDanhDau[k - v[i]];
            --mangDanhDau[v[i]];
        }
    }
    cout << dem;
    return 0;
}