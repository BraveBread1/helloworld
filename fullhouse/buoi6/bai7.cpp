#include<iostream>

using namespace std;

bool nto(int n) {
    if(n < 2) return false;
    for(int i = 2; i * i <= n; ++ i) {
        if(n % i == 0) return false;
    }
    return true;
}

bool thuannghich(int n) {
    int nghich = 0;
    for(int i = n; i > 0; i /= 10) {
        nghich = nghich * 10 + i % 10;
    }
    return n == nghich;
}

int main() {
    int a, b;
    cin >> a >> b;
    for(int i = a; i <= b; ++i) {
        if(thuannghich(i) && nto(i)) {
            cout << i << " ";
        }
    }
    return 0;
}