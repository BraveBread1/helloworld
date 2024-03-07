#include<iostream>

using namespace std;

int tinhtohop(int n, int k) {
    int tohop = 1;
    for(int i = 1; i <= k; ++i) {
        tohop *= (n - k + i);
        tohop /= i;
    }
    return tohop;
}

void tamgiacpascal(int n) {
    for(int i = 0; i <= n; ++i) {
        for(int x = 0; x <= i; ++x) {
            cout << tinhtohop(i, x) << " ";
        }
        cout << endl;
    }
}

int main() {
    int n; cin >> n;
    tamgiacpascal(n);
    return 0;
}