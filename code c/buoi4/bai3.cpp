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

bool tanggiam(int n) {
    int du1 = n % 10;
    int du2 = (n % 100) / 10;
    if(du1 == du2) return false;
    else if(du2 < du1) {
        while(n > 9) {
            du1 = n % 10;
            du2 = (n % 100) / 10;
            if(du2 >= du1) return false;
            n /= 10;
        }
        return true;
    }
    else if(du2 > du1) {
        while(n > 9) {
            du1 = n % 10;
            du2 = (n % 100) / 10;
            if(du2 <= du1) return false;
            n /= 10;
        }
        return true;
    }
}

int main () {
    int n;
    cin >> n;
    int dem = 0;
    for(int i = pow(10, n - 1);i <= pow(10, n) -1; i++) {
        if(tanggiam(i) && check(i)) {
            cout<<i<<endl;
            ++dem;
        }
    }
    cout << dem << endl;
    return 0;
}