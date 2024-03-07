#include<iostream>
#include<set>

using namespace std;

int main() {
    int n, m; cin >> n >> m;
    int a[n];
    int b[m];
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < m; ++i) cin >> b[i];
    set<int> s1;
    set<int> s2;
    for(int i = 0; i < n; ++i) s1.insert(a[i]);
    for(int i = 0; i < m; ++i) {
        s2.insert(b[i]);
    }
    for(int x : s1) {
        if(s2.count(x)) cout << x << " ";
    }
    cout << endl;
    for(int i = 0; i < m; ++i) s1.insert(b[i]);
    for(int x : s1) cout << x << " ";
    return 0;
}