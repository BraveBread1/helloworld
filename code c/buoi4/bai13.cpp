#include<iostream>
#include<math.h>

using namespace std;

bool thuannghich(int n) {
    int nghich = 0;
    for(int i = n; i > 0; i /= 10) {
        int du = i % 10;
        nghich = nghich * 10 + du;
    }
    if(nghich == n) return true;
    else return false;
}


bool check1(int n) {
    int tong = 0;
    for(n; n > 0; n /= 10) {
        int du = n % 10;
        tong += du;
    }
    if(tong % 8 == 0) {
        return true;
    } else return false;
}

bool check2(int n) {
    for(n; n > 0; n /= 10) {
        int du = n % 10;
        if(du == 6) return true;
    }
    return false;
}

int main() {
    int a, b;
    cin >> a >> b;
    for(a; a <= b; a++) {
        if(thuannghich(a) && check1(a) && check2(a)) cout << a << " ";
    }
}