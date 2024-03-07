#include<iostream>

using namespace std;

int main() {
    int n; cin >> n;
    for(int i = 1; i <= n; ++i) {
        for(int a = 1; a <= n; ++a) cout << "*";
        cout << endl;
    }
    cout << endl;
    for(int i = 1; i <= n; ++i) {
        if(i == 1 || i == n) {
            for(int a = 1; a <= n; a ++) cout << "*";
            cout << endl;
        }
        else {
            cout << "*";
            for(int a = 1; a <= n - 2; a ++) cout << " ";
            cout << "*" << endl;
        }
    }
    cout << endl;
    for(int i = 1; i <= n; ++i) {
        if(i == 1 || i == n) {
            for(int a = 1; a <= n; a ++) cout << "*";
            cout << endl;
        }
        else {
            cout << "*";
            for(int a = 1; a <= n - 2; a ++) cout << "#";
            cout << "*" << endl;
        }
    }
    cout << endl;
    for(int i = 1; i <= n; ++i) {
        if(i == 1 || i == n) {
            for(int a = 1; a <= n; ++a) cout << i << " ";
            cout << endl;
        }
        else {
            for(int a = 1; a <= n; ++a) {
                if(a == 1 || a == n) cout << i << " ";
                else cout << "  ";
            }
            cout << endl;
        }
    }
    return 0;
}