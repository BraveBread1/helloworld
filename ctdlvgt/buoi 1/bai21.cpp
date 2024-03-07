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

long long bcnn(long long a, long long b) {
    long long bcnn = b / (long long)ucln(a, b) * a;
    return bcnn;
}

int main() {
    long long a, b;
    cin >> a >> b;
    cout << ucln(a, b) << " " << bcnn(a, b);
    return 0;
}