#include<iostream>
#include<set>
#include<vector>

using namespace std;

int main() {
    int n; cin >> n;
    vector<set<int>> a(n);
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            int x; cin >> x;
            a[i].insert(x);
        }
    }
    vector<short> g(100001, 0);
    for(int i = 0; i < n; ++i) {
        for(int x : a[i]) {
            ++g[x];
        }
    }
    bool cs = true;
    for(int i = 0; i < g.size(); ++i) {
        if(g[i] == n) {
            cout << i << " ";
            cs = false;
        }
    }
    if(cs) cout << "NOT FOUND";
    return 0;
}