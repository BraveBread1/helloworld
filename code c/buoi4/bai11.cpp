#include<iostream>
#include<math.h>

using namespace std;

int gt(int n) {
    int giaithua = 1;
    for (n; n > 0; n--) {
        giaithua *= n;
    }
    return giaithua;
}

int tgt(int n) {
    int tong = 0;
    for(n; n > 0; n /= 10) {
        int du = gt(n % 10);
        tong += du;
    }
    return tong;
}

int main() {
    int a, b;
    cin >> a >> b;
    for(a; a <= b; a ++) {
        if(a == tgt(a)) {
            cout << a << " ";
        }
    }
}