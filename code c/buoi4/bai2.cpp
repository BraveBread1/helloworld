#include<iostream>
#include<math.h>

using namespace std;

int tu(int n) {
    int tong = 0;
    for (int i = 1;i <= n / 2; i++){
        if(n % i == 0) {
            tong += i;
        }
    }
    return tong;
}

int main() {
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if (tu(i) == i) {
            cout << i << " ";
        }
    }
    return 0;
}