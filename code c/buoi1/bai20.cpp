#include<iostream>

using namespace std;

int main () {
    long long t, n; cin >> t >> n;
    if(t < 1 || t > 12 || n < 1) cout << "INVALID";
    else {
        if(t == 1 || t == 3 || t == 5 || t == 7 || t == 8 || t == 10 || t == 12) cout << "31";
        else if(t == 2) {
            if(n % 400 == 0 || (n % 4 == 0 && n % 100 != 0)) cout << "29";
            else cout << " 28";
        }
        else cout << "30";
        return 0;
    }
}