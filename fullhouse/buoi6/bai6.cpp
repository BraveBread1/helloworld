#include<iostream>

using namespace std;

bool nto(int n) {
    if(n < 2) return false;
    for(int i = 2; i * i <= n ; ++i) {
        if(n % i == 0) return false;
    }
    return true;
}

bool SoCuoiLonNhat(int n) {
    int cuoi = n % 10;
    for(int i = n / 10; i > 0; i /= 10) {
        if(i % 10 > cuoi) return false;
    }
    return true;
}

int main() {
    int n; cin >> n;
    int dem = 0;
    for(int i = 2; i <= n; ++i) {
        if(SoCuoiLonNhat(i) && nto(i)) {
            cout << i << " ";
            ++dem;
        }
    }
    cout << endl;
    cout << dem;
    return 0;
}