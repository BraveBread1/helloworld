#include<iostream>

using namespace std;

bool check(string a, string b, string c, int n) {
    for(int i = 0; i < n; ++i) {
        if((a[i] != c[i] && b[i] != c[i])) {
            return true;
        }
    }
    return false;
}

int main() {
    int t; cin >> t;
    for(t; t > 0; --t) {
        int n; cin >> n;
        string a, b, c;
        cin >> a >> b >> c;
        if(check(a, b, c, n)) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}