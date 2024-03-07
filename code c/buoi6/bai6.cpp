#include<iostream>

using namespace std;

int main() {
    int n; cin >> n;
    for(int i = n; i > 0; i--) {
        for(int b = n; b > i; b--){
            cout << "~";
        }
        for(int a = i; a > 0; a--) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}