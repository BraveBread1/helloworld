#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int tich = 1;
    for(n; n > 0; n /= 10) {
        int du = n % 10;
        tich *= du;
    }
    cout << tich;
    return 0;
}