#include<iostream>

using namespace std;

int main() {
    int n; cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int a = i; a > 1; a--) {
            cout << a;
        }
        for(int a = 1; a <= n - i + 1; a++) {
            cout << a;
        }
        cout << endl;
    }
    return 0;
}