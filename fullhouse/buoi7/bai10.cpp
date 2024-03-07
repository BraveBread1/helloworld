#include<iostream>

using namespace std;

int main() {
    int n; cin >> n;
    int a[n];
    int min = 1000000;
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < n; ++i) {
        if(a[i] < min) min= a[i];
    }
    for(int i = min; i > 0; --i) {
        bool cs = true;
        for(int b = 0; b < n; ++b) {
            if(a[b] % i != 0){
                cs = false;
                break;
            }
        }
        if(cs) {
            cout << i;
            return 0;
        }
    }
}