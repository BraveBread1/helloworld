#include<iostream>
#include<math.h>
using namespace std;

bool hh(int n) {
    int tong = 0;
    if(n % 2 != 0) return false;
    for(int i = 2; i <= sqrt(n); i = i + 2){
        if(n % i == 0 && i != n / i) tong = tong + i + n / 1;
        else if(n % i == 0) tong = tong + i; 
    }
    return tong == n;
}

int main() {
    int a, b;
    cin >> a >> b;
    if(a <= b) {
        for(a; a <= b; a ++) {
            if(hh(a)) cout << a << " ";
        }
    }
    else {
        for(b; b <= a; b ++) {
            if(hh(b)) cout << b << " ";
        }
    }
    return 0;
}