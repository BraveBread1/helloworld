#include<iostream>

using namespace std;

int main() {
    int n; cin >> n;
    for(int i = 1; i <= n; i++) {
        if(i % 2 != 0) {
            for(char a = 64 + i; a <= 63 + i + n; a++) cout << a;
            cout << endl;
        }
        else {
            for(char a = 96 + i; a <= 95 + i + n; a++) cout << a;
            cout << endl;
        }
    }
    return 0;
}