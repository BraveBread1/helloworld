#include<iostream>

using namespace std;

int tongcs(string n) {
    int tong = 0;
    for(string::iterator it = n.begin(); it != n.end(); ++it) {
        int x = *it - '0';
        tong += x;
    }
    return tong;
}

int main() {
    string n; cin >> n;
    int tong = tongcs(n);
    if(tong % 3 == 0) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}