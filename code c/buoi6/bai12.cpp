#include<iostream>

using namespace std;

int main() {
    int n; cin >> n;
    cout << "*" << endl;
    for(int i = 2; i <= n - 1; i ++) {
        cout << "*";
        for(int a = i - 2; a > 0; a--) {
            cout << ".";
        }
        cout << "*" << endl;
    }
    for(int i = 1; i <= n; i ++) cout << "*";
    return 0;
}