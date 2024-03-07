#include<iostream>
#include<math.h>

using namespace std;

int main() {
    long long n; cin >> n;
    long long tong = 0;
    for(long long i = 1; i <= sqrt(n); i++) {
        if(n % i == 0 && i != n / i) {
            tong += i + n / i;
        }
        else if(n % i == 0 && i == n / i) tong += i;
    }
    cout << tong;
    return 0;
}