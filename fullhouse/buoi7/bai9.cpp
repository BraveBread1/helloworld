#include<iostream>

using namespace std;

int ucll(int a, int b) {
    while(b != 0) {
        int du = a % b;
        a = b;
        b = du;
    }
    return a;
}

int main() {
    int n; cin >> n;
    int a[n];
    int dem = 0;
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < n; ++i) {
        for(int b = i + 1; b < n; ++b) {
            if(ucll(a[i], a[b]) == 1) ++dem;
        }
    }
    cout << dem;
    return 0;
}