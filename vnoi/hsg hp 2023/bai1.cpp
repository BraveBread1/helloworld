#include<iostream>

using namespace std;

int main() {
    int n; cin >> n;
    int cnt = 0;
    for(int i = 1; i * i <= n; ++i) {
        if(n % i == 0) {
            if(i == n / i) cnt += 1;
            else {
                cnt += 2;
            }
        }
    }
    cout << cnt;
    return 0;
}