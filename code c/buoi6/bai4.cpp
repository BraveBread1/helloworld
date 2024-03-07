#include<iostream>

using namespace std;

int main() {
    int n; cin >> n;
    for(int i = 1; i <= n; i++) {
        cout << "*";
    }
    cout << endl;
    for(int i = n - 2; i > 0; i--) {
        cout << "*";
        for(int a = 1; a < i; a++) {
            cout << ".";
        }
        cout << "*" << endl;
    }
    cout << "*";
    return 0;
}
