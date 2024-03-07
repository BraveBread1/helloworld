#include<iostream>

using namespace std;

int main() {
    char c; cin >> c;
    if(c <= 'z' && c >= 'a') {
        c -= 32;
        cout << c;
    }
    else cout << c;
    return 0;
}