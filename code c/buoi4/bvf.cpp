#include<iostream>

using namespace std;

bool lp(int n) {
    for(n; n > 0; n /= 10) {
        int du = n % 10;
        if (du != 0 && du != 6 && du != 8) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    if(lp(n)) {
        cout << "1";
    } else cout << "0";
    return 0;
}