#include<iostream>

using namespace std;

int main() {
    char c; cin >> c;
    if(c >= 97 && c <= 122) {
        char a = c - 32;
        cout << "Chu cai hoa tuong ung voi " << c << " la " << a;
    }
    else if(c >= 65 && c <= 90) {
        char a = c + 32;
        cout << "Chu cai thuong tuong ung voi " << c << " la " << a;
    }
    else cout << c << " khong la chu cai";
    return 0;
}