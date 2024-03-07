#include<iostream>
#include<iomanip>

using namespace std;

double sum(int n) {
    if(n == 1) return 1;
    return n + sum(n - 1);
}

double sumfrac(int n) {
    if(n == 1) return 1;
    return 1 / sum(n) + sumfrac(n - 1);
}


int main() {
    int n; cin >> n;
    cout << fixed << setprecision(2) << sumfrac(n);
    return 0;
}