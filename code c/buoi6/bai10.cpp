#include<iostream>

using namespace std;

int main() {
    int n; cin >> n;
    for(int i = 1; i <= n; i++) cout << "*";
    cout << endl;
    for(int i = 1; i <= n - 2; i++) {
        cout << "*";
        for(int a = 1; a <= n - 2; a++) cout << ".";
        cout << "*";
        cout << endl;
    }
    for(int i = 1; i <= n; i++) cout << "*";
    return 0;
}