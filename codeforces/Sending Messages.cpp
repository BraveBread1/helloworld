#include<iostream>

using namespace std;

int main() {
    long long t; cin >> t;
    for(t; t > 0; --t) {
        long long n, f, a, b;
        cin >> n >> f >> a >> b;
        long long m[n];
        for(long long i = 0; i < n; ++i) {
            cin >> m[i];
        }
        if(n == 1) {
            if(m[0] * a >= f && b >= f) {
                cout << "NO" << endl;
                continue;
            }
        }
        bool cs = true;
        if(m[0] * a > b) f -= b;
        else f -= m[0] * a;
        if(f <= 0) {
            cout << "NO" << endl;
            continue;
        }
        for(long long i = 1; i < n; ++i) {
            long long con;
            if((m[i] - m[i - 1]) * a < b) con = (m[i] - m[i - 1]) * a;
            else con = b;
            f -= con;
            if(f <= 0) {
                cout << "NO" << endl;
                cs = false;
                break;
            }
        }
        if(cs) cout << "YES" << endl;
    }
    return 0;
}