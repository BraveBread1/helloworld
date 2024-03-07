#include<iostream>

using namespace std;

long long ucln(long long a, long long b) {
    while(b != 0) {
        long long c = a % b;
        a = b;
        b = c;
    }
    return a;
}

int main() {
    long long t; cin >> t;
    for(long long i = 1; i <= t; ++i) {
        long long a, b; cin >> a >> b;
        long long uoc = ucln(a, b);
        long long boi = a * b / uoc;
        if(b % a == 0) {
            boi *= b / a;
        }
        cout << boi << endl;
    }
    return 0;
}