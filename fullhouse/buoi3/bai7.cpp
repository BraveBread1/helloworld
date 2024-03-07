#include<iostream>

using namespace std;

int main () {
    long long n; cin >> n;
    int dem = 0;
    for(n; n > 0; n /= 10) dem++;
    cout << dem;
    return 0;
}