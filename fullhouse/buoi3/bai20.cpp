#include<iostream>
#include<math.h>

using namespace std;

int main() {
    long long n; int p;
    cin >> n >> p;
    int mu = 1;
    long long b;
    long long dem = 0;
    while(n > pow(p,mu)) {
        b = n - n % (long long)pow(p, mu);
        dem += b / pow(p,mu);
        mu ++;
    }
    cout << dem;
    return 0;
}