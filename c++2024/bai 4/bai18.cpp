#include<iostream>
#include<math.h>

using namespace std;

bool nto (int n) {
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) return false;
    }
    return true;
}

bool smith(int n)
{
    if(nto(n)) {
        return false;
    }
    int tong1 = 0;
    int tong2 = 0;
    for(int i = n; i > 0; i /= 10) tong1 += i % 10;
    for(int i = 2; i <= n; i++) {
        while(n % i == 0) {
            for(int a = i; a > 0; a /= 10) tong2 += a % 10;
            n /= i;
        }
    }
    if(tong1 == tong2) return true;
    else return false;
}

int main() {
    int n; cin >> n;
    while(!smith(n))
    {
        ++n;
    }
    cout << n;
    return 0;
}