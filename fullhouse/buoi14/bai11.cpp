#include<iostream>
#include<cmath>

using namespace std;

void ltr(long long n, int dem) {
    if(n == 0) return;
    cout << n / (long long)pow(10, dem - 1) << " ";
    return ltr(n % (long long)pow(10, dem - 1), dem - 1);
}

void rtl(long long n) {
    if(n == 0) return;
    cout << n % 10 << " ";
    return rtl(n / 10);
}

int main() {
    long long n; cin >> n;
    int dem = 0;
    long long i = n;
    while(i > 0) {
        ++dem;
        i /= 10;
    }
    ltr(n, dem);
    cout << endl;
    rtl(n);
    return 0;
}