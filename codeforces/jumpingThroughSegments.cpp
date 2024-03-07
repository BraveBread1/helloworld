#include<iostream>

using namespace std;

int main() {
    int t; cin >> t;
    for(int i = 1; i <= t; ++i) {
        int n; cin >> n;
        int a[n][2];
        for(int j = 0; j < n; ++j) {
            cin >> a[j][0] >> a[j][1];
        }
        int m = a[0][0];
        if(a[1][0] % 2 == 0 && a[1][0] / 2 > m) m = a[1][0] / 2;
        else if(a[1][0] % 2 != 0 && a[1][0] / 2 + 1 > m) m = a[1][0] / 2 + 1; 
        for(int j = 0; j < n - 1; ++j) {
            if(a[j][1] < a[j + 1][0] && a[j + 1][0] - a[j][1] > m) m = a[j + 1][0] - a[j][1];
            else if(a[j][0] > a[j + 1][1] && a[j][0] - a[j + 1][1] > m) m = a[j][0] - a[j + 1][1];
        }
        cout << m << endl;
    }
    return 0;
}