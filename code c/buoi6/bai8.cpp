#include<iostream>

using namespace std;

int main() {
    int n; cin >> n;
    for(int i = 1; i <= n; i++) {
        cout << "*";
    }
    cout << endl;
    for(int i = 1; i <= n - 2; i++) {
        for(int a = 1; a <= i; a++) {
            cout << "~";
        }
        cout << "*";
        for(int a = n - 3; a >= i; a--) cout << ".";
        cout << "*" << endl; 
    }
    for(int i = 1; i <= n - 1; i++) cout << "~";
    cout << "*";
    return 0;
}