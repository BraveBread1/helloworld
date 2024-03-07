#include<iostream>
#include<math.h>

using namespace std;

bool check(int n) {
    for(int a = 2; a <= sqrt(n); a++) {
        if(n % a == 0 && n % (a * a) == 0) return true;
    }
    return false;
}

int main() {
    int a, b; cin >> a >> b;
    for(int i = a; i <= b; i++) {
        if(check(i)) cout << i << " ";
    }
    return 0;
}