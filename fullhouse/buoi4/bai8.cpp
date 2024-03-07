#include<iostream>
#include<math.h>

using namespace std;

bool nto (int n) {
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) return false;
    }
    return true;
}

int main() {
    int n; cin >> n;
    for(int i = 1; i <= n; i++) {
        if(i == 1) cout << "1" << endl;
        else if(i % 2 == 0) cout << "2" << endl;
        else if(nto(i)) cout << i << endl;
        else {
            for(int a = 3; a <= i; a ++) {
                if(nto(a) && i % a == 0) {
                    cout << a << endl;
                    break;
                }
            }
        }
    }
}