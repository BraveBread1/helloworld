#include<iostream>
#include<math.h>
using namespace std;

bool nto (int n) {
    if(n <2) return false;
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) return false;
    }
    return true;
}

int main() {
    int n; cin >> n;
    if(nto(n)) cout << "YES";
    else cout << "NO";
    return 0;
}