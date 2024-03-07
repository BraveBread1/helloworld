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
        int a; cin >> a;
        for(int b = a; b > 0; b--) {
            if(a % b == 0 && nto(b)) {
                cout << b << endl;
                break;
            }
        }
    }
    return 0;
}