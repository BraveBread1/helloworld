#include<iostream>

using namespace std;

bool nto(int n) {
    if(n < 2) return false;
    for(long long i = 2; i * i <= n; ++i) {
        if(n % i == 0) return false;
    }
    return true;
}

bool thuan_nghich(int n) {
    int nghich = 0;
    for(int i = n; i > 0; i /= 10) {
        nghich = nghich * 10 + i % 10;
    }
    return n == nghich;
}

bool bauoc(int n) {
    int dem = 0;
    if(n % 2 == 0) {
        ++dem;
        while(n % 2 == 0) {
            n /= 2;
        }
    }
    for(int i = 3; i * i <= n; i += 2) {
        if(n % i == 0) {
            ++dem;
            while(n % i == 0) {
                n /= i;
            }
            if(dem == 3) return true;
        }
    }
    if(n > 1) ++ dem;
    if(dem >= 3) return true;
    else{
    return false;
}
}

int main() {
    int a, b; cin >> a >> b;
    bool cs = false;
    for(int i = a; i <= b; ++i) {
        if(thuan_nghich(i) && bauoc(i)) {
            cout << i << " ";
            cs = true;
        }
    }
    if(cs == false) cout << "-1"; 
    return 0;
}