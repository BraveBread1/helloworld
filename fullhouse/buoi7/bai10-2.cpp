#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n, x, index;
    cin >> n >> x >> index;
    vector<int> a;
    for(int i = 0; i < n; ++i) {
        int x; cin >> x;
        a.push_back(x);
    }
    a.insert(a.begin() + index - 1, x);
    for(int i = 0; i < n + 1; ++i) cout << a[i] << " ";
    return 0;
}