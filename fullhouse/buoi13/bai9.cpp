#include<iostream>

using namespace std;

int main() {
    int fibo[10000001];
    fibo[0] = 0;
    fibo[1] = 1;
    fibo[2] = 1;
    for(int i = 3; i < 10000001; ++i) {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
        fibo[i] %= 1000000007;
    }
    int t; cin >> t;
    for(int i = 1; i <= t; ++i) {
        int n; cin >> n;
        cout << fibo[n] << endl;
    }
    return 0;
}