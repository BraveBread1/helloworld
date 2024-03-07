#include<iostream>
#include<math.h>

using namespace std;

bool sa(int n) {
    int cs = 0;
    for(int i = n; i > 0; i /= 10) {
        cs++;
    }
    int tong = 0;
    for(int i = n; i > 0; i /= 10) {
        int du = pow(i % 10, cs);
        tong += du;
    }
    if(tong == n) return true;
    else return false;
}

int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        if(sa(i)) cout << i << " ";
    }
    return 0;
}