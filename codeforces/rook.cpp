#include<iostream>

using namespace std;

int main()  {
    int t; cin >> t;
    for(int i = 1; i <= t; ++i) {
        char c; int n;
        cin >> c >> n;
        for(int j = 1; j <= 8; ++j) {
            if(j != n) cout << c << j << endl;
        }
        for(char x = 'a'; x <= 'h'; ++x) {
            if(x != c) cout << x << n << endl;
        }
    }
    return 0;
}