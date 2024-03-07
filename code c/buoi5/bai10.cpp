#include<iostream>
#include<math.h>

using ll = long long;
using namespace std;

ll to_hop(int n, int k) {
    ll tich = 1;
    for(int i = 1; i <= k; ++i) {
        tich *= n - i + 1;
        tich /= i;
    }
    return tich;
}

int main() {
    ll n; cin >> n;
    cout << "1" << endl;
    for(int i = 1; i <= n - 1; ++i) {
        for(int a = 0; a <= i; ++a) {
            cout << to_hop(i, a) << " ";
        }
        cout << endl;
    }
    return 0;
}