#include<iostream>
#include<string>

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
    cout << tongcs(n);
    return 0;
}