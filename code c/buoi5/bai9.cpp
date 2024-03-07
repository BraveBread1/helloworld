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
        if(sa(n)) cout << "1";
        else cout << "0";
    return 0;
}