#include<iostream>
#include<math.h>

using namespace std;

bool tn(int n) {
    int cs = 0;
    for(int i = n; i != 0; i /= 10) {
        cs++;
    }
    int du = n % 10;
    int dau = n / (int)pow(10, cs - 1);
    while (n > 9) {
        if(du == dau) {
            du = n % 10;
            dau = n / (int)pow(10, cs - 1);
            n = n % (int)pow(10, cs - 1);
            n /= 10;
            cs -= 2;
        }
        else {
            return false;
        }
    }
    return true;
}

bool chm(int n) {
    int tong = 0;
    for(n; n > 0; n /= 10) {
        int du = n % 10;
        tong += du;
    }
    if(tong % 10 == 0) {
        return true;
    } else return false;
}

int main() {
    int n;
    cin >> n;
    int dem = 0;
    for(int i = pow(10, n -1);i <= pow(10, n) -1; i++) {
        if(tn(i) && chm(i)) {
            dem++;
        }
    }
    cout << dem << endl;
    return 0;
}