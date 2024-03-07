#include<iostream>

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
    for(int i = n; i > 0; i /= 10) {
        if(i % 10 == 6) return true;
    }
    return false;
}
bool check2(int n) {
    int tong = 0;
    for(int i = n; i > 0; i /= 10) {
        tong += i % 10;
    }
    if(tong % 10 == 8) return true;
    else return false;
}

int main () {
    int a, b; cin >> a >> b;
    int dem = 0;
    for(a; a <= b; a++) {
        if(thuannghich(a) && check1(a) && check2(a)) {
            cout << a << " ";
            dem ++;
        }
    }
    if(dem == 0) cout << "-1";
    return 0;
}