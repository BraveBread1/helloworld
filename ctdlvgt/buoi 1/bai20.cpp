#include<iostream>
#include<math.h>

using namespace std;
bool nto (int n) {
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) return false;
    }
    return true;
}
int main() {
    long long n, k;cin >> n >> k;
    if(n == 1) cout << "-1";
    for(long long i = 2; i <= n; i++) {
        while(n % i == 0){
            n /= i;
            k--;
            if(k < 1) break;
        }
        if(k == 0) {
            cout << i;
            break;
        }
    }
    if(k > 0) cout << "-1";
    return 0;
}