#include<iostream>

using namespace std;

int main() {
    long long n; cin >> n;
    int dem = 0;
    for(n; n > 0; n /= 10) {
        int du = n % 10;
        if(du == 2 || du == 3 || du == 5 || du == 7) dem ++;
    }
    cout << dem;
    return 0;
}