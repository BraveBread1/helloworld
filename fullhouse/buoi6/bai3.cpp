#include<iostream>
#include<math.h>

using namespace std;

int main() {
    long long n; cin >> n;
    bool a[n + 1];
    for(long long i = 0; i <= n; ++i) a[i] = true;
    a[0] = false;
    a[1] = false;
    for(long long i = 2; i * i <= n; ++i) {
        if(a[i]) for(long long x = i * i; x <= n; x += i) a[x] = false;
    }
    long long uoc = 1;
    for(long long i = 2; i <= n; ++i) {
        if(a[i]) {
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