#include<iostream>
#include<math.h>

using namespace std;

int main() {
    int a, b,s;
    cin >> a >> b >> s;
    if( s < a) {
        cout << "NO";
    }
    else {
        s -= a;
        if (s < b) {
            cout << "NO";
        }
        else {
            s -= b;
            if (s % 2 != 0){
                cout << "NO";
            } 
            else {
                cout << "YES";
            }
        }
    }
    return 0;
}