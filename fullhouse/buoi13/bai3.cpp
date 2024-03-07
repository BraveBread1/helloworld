#include<iostream>

using namespace std;

int mod = 1e9 + 7;

int main() {
    int n;
    cin >> n;
    int *step = new int [n + 1];
    step[0] = step[1] = 1;
    step[2] = 2;
    for(int i = 3; i <= n; ++i) {
        step[i] = step[i - 1] + step[i - 2] + step[i - 3];
        step[i] %= mod;
    }
    cout << step[n];
    return 0;
}