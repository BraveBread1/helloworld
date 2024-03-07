#include<iostream>

using namespace std;

void minMaxDigit(long long n, int &min, int &max) {
    if(n == 0) {
        return;
    }
    int digit = n % 10;
    if(digit < min) {
        min = digit;
    }
    if(digit > max) max = digit;
    return minMaxDigit(n / 10, min, max);
}

int main() {
    long long n; cin >> n;
    int min = 9, max = 0;
    minMaxDigit(n, min, max);
    cout << max << " " << min;
    return 0;
}