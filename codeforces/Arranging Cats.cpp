#include<iostream>

using namespace std;

int main() {
    int t; cin >> t;
    for(t; t > 0; --t) {
        int n; cin >> n;
        string s; cin >> s;
        string f; cin >> f;
        int n1 = 0, n2 = 0;
        for(int i = 0; i < n; ++i) {
            if(s[i] != f[i]) {
                if(s[i] == '1') ++n1;
                else ++n2;
            }
        }
        if(n2 >= n1) cout << n2 << endl;
        else cout << n1 << endl;
    }
    return 0;
}