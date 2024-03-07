#include<iostream>

using namespace std;

bool nto(int n) {
    if(n < 2) return false;
    for(int i = 2; i * i <= n; ++i) {
        if(n % i == 0) return false;
    }
    return true;
}

int main() {
    int n; cin >> n;
    cout << "1" << endl;
    for(int i = 2; i <= n; ++i) {
        if(nto(i)) {
            cout << i << endl;
            continue;
        }
        for(int x = 2; x <= i; ++x) {
            if(i % x == 0) {
                cout << x << endl;
                break;
            }
        }
    }
    return 0;
}