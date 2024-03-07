#include<bits/stdc++.h>

using namespace std;

int main() {
    unsigned long long n; cin >> n;
    for(unsigned long long i = 1; i <= n; ++i) {
        unsigned long long BiAn = 4 * (i - 1) * (i - 2);
        unsigned long long KoAn =i * i *(i * i - 1) / 2;
        cout << KoAn - BiAn << endl;
    }
    return 0;
}