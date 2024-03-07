#include<iostream>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    int n, k, x;
    for(t; t > 0; --t) {
        cin >> n >> k;
        long long tich = 1;
        for(int i = 0; i < n; ++i) {
            cin >> x;
            tich *= x;
        }
        if(2023 % tich == 0) {
            cout << "YES" << endl;
            int result = 2023 / tich;
            cout << result;
            for(int i = 1; i < k; ++i) {
                cout << " 1";
            }
            cout << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}