#include<iostream>

using namespace std;

int main() {
    int n; cin >> n;
    for(int i = n; i > 0; i--) {
        for(int a = 2 * n - 2; a >= 2 * i - 1; a--) cout << " ";
        for(int a = 1; a <= 2 * i - 1; a++) cout << "* ";
        cout << endl;
    }
    return 0;
}