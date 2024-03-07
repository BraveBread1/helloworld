#include<iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    for(t; t > 0; --t) {
        long long n; cin >> n;
        long long sum = n;
        while(n != 1) {
            n /= 2;
            sum += n;
        }
        cout << sum << endl;
    }
    return 0;
}