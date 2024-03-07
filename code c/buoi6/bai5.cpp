#include<iostream>

using namespace std;

int main() {
    int n; cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int a = i; a > 0; a--) {
            cout << "*";
        }
        cout << endl;
    }
    for(int i = n - 1; i > 0; i--) {
        for(int a = i; a > 0; a--) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}