#include<iostream>

using namespace std;

bool thuan_nghich(int n) {
    int nghich = 0;
    for(int i = n; i > 0; i /= 10) {
        nghich = nghich * 10 + i % 10;
    }
    return n == nghich;
}

int main() {
    int n; cin >> n;
    int a[n][n];
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) cin >> a[i][j];
    }
    int dem = 0;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j <= i; ++j) {
            if(thuan_nghich(a[i][j])) ++dem;
        }
    }
    cout << dem;
    return 0;
}