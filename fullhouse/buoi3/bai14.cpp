#include<iostream>

using namespace std;

int main() {
    int n; cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int a = 1; a <= i; a++) cout << "*";
        cout << endl;
    }
    cout << endl;
    for(int i = n; i > 0; i--) {
        for(int a = 1; a <= i; a++) cout << "*";
        cout << endl;
    }
    cout << endl;
    for(int i = 1; i <= n; i++) {
        for(int a = n; a > i; a--) cout << " ";
        for(int a = 1; a <= i; a++) cout << "*";
        cout << endl;
    }
    cout << endl;
    for(int i = 1; i <= n; i++) {
        for(int a = 1; a <= i - 1; a++) cout << " ";
        for(int a = n; a >= i; a--) cout << "*";
        cout << endl;
    }
    cout << endl;
    for(int i = 1; i <= n; i++) {
        if(i == 1 || i == n) {
            for(int a = 1; a <= i; a++) cout << "*";
            cout << endl;
        }
        else {
            for(int a = 1; a <= i; a++) {
                if(a == 1 || a == i) cout << "*";
                else cout << " ";
            }
            cout << endl;
        }
    }
    return 0;
}