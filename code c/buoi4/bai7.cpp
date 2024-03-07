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

bool check(int n) {
    int dem = 0;
    for(int i = 2; i <= n / 2; i++) {
        if(nto(i)) {
            if(n % i == 0) {
                dem++;
            }
        }
    }
    if(dem < 3) return false;
    else return true;
}

int main () {
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if(tn(i) && check(i)) {
            cout << i << " ";
        } 
    }
    return 0;
}