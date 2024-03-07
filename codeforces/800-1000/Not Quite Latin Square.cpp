#include<iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    for(t; t > 0; --t) {
        int x;
        bool check[3];
        for(int i = 0; i < 3; ++i) check[i] = false;        
        char a[3][3];
        for(int i = 0; i < 3; ++i) {
            for(int j = 0; j < 3; ++j) {
                cin >> a[i][j];
                if(a[i][j] == '?') {
                    x = i;
                }
            }
        }
        for(int i = 0; i < 3; ++i) {
            if(a[x][i] == 'A') check[0] = true;
            else if(a[x][i] == 'B') check[1] = true;
            else if(a[x][i] == 'C') check[2] = true;
        }
        for(int i = 0; i < 3; ++i) {
            if(check[i] == false) {
                if(i == 0) cout << 'A' << endl;
                else if(i == 1) cout << 'B' << endl;
                else cout << 'C' << endl;
            }
        } 
    }
    return 0;
}