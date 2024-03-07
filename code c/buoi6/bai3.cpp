#include<iostream>

using namespace std;

int main() {
    int n; cin >> n;
    for(int i = n; i > 0; i--) {
        for(int a = i - 1; a > 0; a--) {
            cout << "~";
        }
        for(int b = n; b > 0; b--) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}