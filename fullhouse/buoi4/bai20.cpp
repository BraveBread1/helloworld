#include<iostream>
#include<math.h>

using namespace std;

bool nto (long long n) {
    for(long long i = 2; i <= sqrt(n); i = i + 1) {
        if(n % i == 0) return false;
    }
    return true;
}

int main() {
    long long n; cin >> n;
    long long i = 2;;
    int dem = 0;
    while (n >= pow(i, 2)) {
        if(nto(i)) dem = dem + 1;
        i++;
    }
    cout << dem;
    return 0;
}