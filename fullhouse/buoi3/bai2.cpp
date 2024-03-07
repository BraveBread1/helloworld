#include<iostream>
#include<math.h>

using namespace std;

int main() {
    long long n; cin >> n;
    long long tong = 0;
    for(int i = 1; i <= n; i++) tong += pow(i, 2);
    cout << tong;
    return 0;
}