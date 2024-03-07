#include<iostream>
#include<math.h>

bool nto(long long n) {
    for(int i = 2; i * i <= n; ++i) {
        if(n % i == 0) return false;
    }
    return n > 1;
}

using namespace std;

int main() {
    long long n; cin >> n;
    bool a[n + 1];
    long long uoc = 1;
    for(long long i = 2; i <= n; ++i) {
        if(nto(i)) {
            long long dem = 0;
            long long mu = 1;
            long long max;
            while(n >= pow(i, mu)) {
                max = n - n % (long long)pow(i, mu);
                dem += max / pow(i, mu);
                ++mu;
            }
            uoc = (uoc * (dem + 1)) % 1000000007;
        }
    }
    cout << uoc;
    return 0;
}