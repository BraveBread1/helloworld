#include<iostream>

using namespace std;

int main() {
    for(int i = 1; i <= 10000; i++) {
        int n; cin >> n;
        if(n == 2022) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}