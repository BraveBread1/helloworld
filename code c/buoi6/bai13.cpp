#include<iostream>

using namespace std;

int main() {
    int n; cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int a = i; a <= n - 1; a++) cout << "~";
        for(int a = 2 * i - 1; a > 0; a--) cout << "*";
        cout << endl;
    }
    for(int i = 1; i <= n - 1 ; i++) {
        for(int a = i; a > 0; a--) cout << "~";
        for(int a = 2 * n - 1; a > 2 * i; a--) cout << "*";
        cout << endl;
    }
    return 0;
}