#include<iostream>

using namespace std;

void nhap(int *a, int n) {
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }
}

int max_sub_arr(int *a, int n) {
    int tong = a[0];
    int max = a[0];
    for(int i = 1; i < n; ++i) {
        if(a[i] + tong > a[i]) {
            tong = a[i] + tong;
        }
        else {
            tong = a[i];
        }
        if(tong > max) {
            max = tong;
        }
    }
    return max;
}

int main() {
    int n; cin >> n;
    int *a = new int [n];
    nhap(a, n);
    int result = max_sub_arr(a, n);
    cout << result;
    return 0;
}