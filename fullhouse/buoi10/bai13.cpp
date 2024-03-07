#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    int min = 1000000000;
    int dem = 0;
    for(int i = 0; i < n; ++i) {
        for(int j = i + 1; j < n; ++j) {
            if(abs(a[j] - a[i]) == min) ++dem;
            else if(abs(a[j] - a[i]) < min) {
                min = abs(a[j] - a[i]);
                dem = 1;
            }
        }
    }
    cout << min << " " << dem;
    return 0;
}