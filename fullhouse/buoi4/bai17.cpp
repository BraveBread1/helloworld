#include<iostream>
#include<math.h>

using namespace std;

bool nto(long long n) {
    for(long long i = 2; i * i <= n; ++i) {
        if(n % i == 0) return false;
    }
    return n > 1;
}

bool sohh(long long n) {
    for(int i = 2; i <= 32; ++i) {
        if(nto(i)) {
            long long tmp = pow(2, i) - 1;
            if(nto(tmp)) {
                long long hoanhao = tmp * pow(2, i - 1);
                if(hoanhao == n) return true;
            }
        }
    }
    return false;
}

int main() {
    long long n; cin >> n;
    if(sohh(n)) cout << "YES";
    else cout << "NO";
    return 0;
}