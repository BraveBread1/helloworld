#include<iostream>

using namespace std;

int main() {
    long long n; cin >> n;
    int chan = 0;
    int le = 0;
    for(n; n > 0; n /= 10) {
        int du = n % 10;
        if(du % 2 == 0) chan += du;
        else le += du;
    }
    cout << chan << " " << le;
    return 0;
}