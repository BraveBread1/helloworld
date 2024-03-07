#include<iostream>
#include<math.h>

using namespace std;

bool check(int n) {
    if(n < 2) return false;
        for(int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
}

int main() {
    int a, b;
    cin >> a >> b;
    for(a; a <= b; a++) {
        if(check(a)) cout << a << " ";
    }
}