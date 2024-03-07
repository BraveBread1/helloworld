#include<iostream>

using namespace std;

int main() {
    int n; cin >> n;
    int a[n];
    int sum = 0;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        sum += a[i];
    }
    double avr = (double)sum / n;
    for(int i = 0; i < n; ++i) {
        if(a[i] >= avr) cout << a[i] << " ";
    }
    return 0;
}