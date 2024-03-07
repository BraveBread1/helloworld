#include<iostream>

using namespace std;

long long ucln(long long a, long long b) {
    while(b != 0) {
        long long tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

struct frac{
    long long num, denom;
};

void toiGian(frac &n) {
    long long uoc = ucln(n.num, n.denom);
    n.num /= uoc;
    n.denom /= uoc;
}

int main() {
    long long a, b;
    cin >> a >> b;
    frac n = {a, b};
    toiGian(n);
    cout << n.num << "/" << n.denom;
    return 0;
}