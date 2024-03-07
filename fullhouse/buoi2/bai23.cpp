#include<iostream>

using namespace std;

int main() {
    char a; cin >> a;
    if(a >= 97 && a < 122) {
        a += 1;
        cout << a;
    }
    else if(a >= 65 && a < 90) {
        a = a + 32 + 1;
        cout << a;
    }
    else if(a == 122 || a == 90) cout << "a";
    else cout << "INVALID";
    return 0;
}