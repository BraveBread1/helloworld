#include<iostream>
#include<map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    for(int r = 1; r <= t; ++r) {
        int n, k; cin >> n >> k;
        map<int, bool> a;
        int x;
        for(int i = 0; i < n; ++i) {
            cin >> x;
            a[x] = true;
        }
        if(k % 2 == 0) {
            cout << "0";
            continue;
        }
        bool cs = true;
        for(map<int, bool>::iterator it = a.begin(); it != a.end(); ++it) {
            if(a[k - it->first]) {
                cout << "1";
                cs = false;
                break;
            }
        }
        if(cs) cout << "0";
    }
    return 0;
}