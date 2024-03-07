#include<iostream>

using namespace std;

bool nto(int n) {
    if(n < 2) {
        return false;
    }
    for(int i = 2; i * i <= n; ++i) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}

bool check(string n) {
    int tong = 0;
    for(string::iterator it = n.begin(); it != n.end(); ++it) {
        int x = *it - '0';
        if(!nto(x)) {
            return false;
        }
        tong += x;
    }
    return nto(tong);
}

int main() {
    string n; cin >> n;
    if(check(n)) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}