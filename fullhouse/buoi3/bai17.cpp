#include<iostream>

using namespace std;

int main() {
    int n; cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int a = 1; a <= n; a++) {
            if(a == i || a == n + 1 - i) cout << i << " ";
            else cout << "  ";
        }
        cout << endl;
    }
    return 0;
}