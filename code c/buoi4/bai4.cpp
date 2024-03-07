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

bool fib(int n) {
    int tong = 0;
    int a = n;
    while(a != 0) {
        int du = a % 10;
        tong += du;
        a /= 10;
    }
    for(int i = 0; i <= 10 * n; i++) {
        if(tong == 1 / sqrt(5) * (pow((1 + sqrt(5)) / 2, i) - pow((1 - sqrt(5)) / 2, i))) {
            return true;
        }
    }
}

int main() {
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if (fib(i)) {
            cout << i << " ";
        }
    }
    return 0;
}