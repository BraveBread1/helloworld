#include<iostream>
#include<math.h>

using namespace std;

bool nto(int n) {
    if(n < 2) return false;
        for(int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
}

bool ktra(int n) {
    if (nto(n)) {
        for(n ; n > 0; n /= 10) {
            int du = n % 10;
            if(nto(du)) {}
            else {
                return false;
            }
        }
        return true;
    }
    else {
        return false;
    }
}

bool ktt(int n) {
    if(ktra(n)) {
        int tong =0;
        for (n; n > 0; n /= 10) {
            int du = n % 10;
            tong += du;
        }
        if (nto(tong)) {
            return true;
        }
        else{
            return false;
        }
    }
    else {
        return false;
    }
}


int main() {
    int a, b;
    cin >> a >> b;
    int dem = 0;
    for (int i = a; i <= b; i++) {
        if (ktt(i)) {
            dem ++;
        }
    }
    cout << dem << endl;
    return 0;
}