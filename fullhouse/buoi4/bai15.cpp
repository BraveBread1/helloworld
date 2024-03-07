#include<iostream>

using namespace std;


bool nto(long long n) {
    if(n < 2) return false;
    for(long long i = 2; i* i <= n ; i = i + 1) {
        if(n % i == 0) return false;
    }
    return true;
}


int main() {
    long long n; cin >> n;
    if(nto(n)) {
        cout << "NO";
        return 0;
    }
    for(long long i = 2; i <=n; ++i) {
        if(n % i == 0) {
            n /= i;
            if(nto(n)) {cout << "NO"; return 0;}
            else {
                for(long long a = 2; a <= n; ++a) {
                    if(n % a == 0) { n /= a;
                        if(nto(n)) {cout << "YES"; return 0;}
                        else {cout << "NO"; return 0;}
                    }
                }
            }
        }
    }
    return 0;
}