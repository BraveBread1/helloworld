#include<iostream>

using namespace std;

int main () {
    int n; cin >> n;
    int tong = 0;
    for(int i = 1; i <= n / 2; i++){
        if(int uoc = n % i == 0) tong += i; 
    }
    if(tong == n) cout << "1";
    else cout << "0";
    return 0;
}