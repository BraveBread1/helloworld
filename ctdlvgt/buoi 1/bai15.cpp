#include<iostream>

using namespace std;

bool nto(int n) {
    if(n < 2) return false;
    for(int i = 2; i * i <= n; ++i) {
        if(n % i == 0) return false;
    }
    return true;
}

bool check(int n) {
    if(nto(n)) return false;
    int c = n;
    for(int i = 2; i * i <= c; ++i) {
        if(c % i == 0) {
            c /= i;
            if(c % i != 0) return false;
            else while(c % i == 0) c /= i;
        }
    }
    if(c > 1) return false;
    else return true;
}

int main() {
    int a, b; cin >> a >> b;
    for(int i = a; i <= b; ++i) {
        if(check(i)) cout << i << " ";
    }
    return 0;
}