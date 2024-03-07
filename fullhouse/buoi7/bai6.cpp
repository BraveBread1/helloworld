#include<iostream>

using namespace std;

int main() {
    int n; cin >> n;
    int a[n];
    int max1 = 0;
    int max2 = 0;
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < n; ++i) {
        if(a[i] > max1) {
            max1 = a[i];
        }
    }
    for(int i = 0; i < n; ++i) {
        if(a[i] == max1){
            a[i] = 0;
            break;
        }
    }
    for(int i = 0; i < n; ++i) {
        if(a[i] > max2) max2 = a[i];
    }
    cout << max1 << " " << max2;
    return 0;
}