#include<iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    for(t; t > 0; --t) {
        int n; cin >> n;
        if(n % 3 == 0) {
            if(n < 12) {
                cout << "NO" << endl;
            }
            else {
                cout << "YES" << endl;
                cout << "1 4 " << n - 5 << endl;
            }
        }
        else if(n % 3 == 1) {
            if(n < 7) {
                cout << "NO" << endl;
            }
            else {
                cout << "YES" << endl;
                cout << "1 2 " << n - 3 << endl;
            }
        }
        else {
            if(n < 8) {
                cout << "NO" << endl;
            }
            else {
                cout << "YES" << endl;
                cout << "1 2 " << n - 3 << endl;
            }
        }
    }
    return 0;
}