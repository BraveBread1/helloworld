#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    string s, t; cin >> s >> t;
    int a[s.size() + 1][t.size() + 1];
    int result = 0;
    for(int i = 0; i <= s.size(); ++i) {
        a[i][0] = 0;
    }
    for(int i = 0; i <= t.size(); ++i) {
        a[0][i] = 0;
    }
    for(int i = 1; i <= s.size(); ++i) {
        for(int j = 1; j <= t.size(); ++j) {
            a[i][j] = 0;
            if(t[j - 1] == s[i - 1]) {
                a[i][j] = a[i - 1][j - 1] + 1;
            }
            else {
                a[i][j] = max(a[i][j - 1], a[i - 1][j]);
            }
            if(a[i][j] > result) result = a[i][j]; 
        }
    }
    cout << result;
    return 0;
}