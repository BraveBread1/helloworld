#include<iostream>
#include<cmath>

using namespace std;

int main() {
    int n; cin >> n;
    int can = sqrt(n);
    if(can * can == n) cout << n << " la so chinh phuon";
    else cout << n << " khong phai la so chinh phuong";
    return 0;
}