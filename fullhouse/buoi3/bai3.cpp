#include<iostream>

using namespace std;

int main() {
    int n; cin >> n;
    int dem = 1;
    for(int i = 1; i <= n / 2; i = i + 1) {
        if(n % i == 0) dem = dem + 1;
    }
    cout << dem << endl;
    for(int i = 1; i <= n / 2; i = i + 1) {
        if(n % i == 0) cout << i << " ";
    }
    cout << n;
    return 0;
}