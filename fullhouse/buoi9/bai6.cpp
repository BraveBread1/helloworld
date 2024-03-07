#include<iostream>

using namespace std;

void merge(int a[], int l, int m, int r) {
    int dem1 = l;
    int dem2 = m + 1;
    int mangTam[r - l + 1];
    int dem = 0;
    while(dem1 <= m && dem2 <= r) {
        if(a[dem1] < a[dem2]) {
            mangTam[dem] = a[dem1];
            ++dem;
            ++dem1;
        }
        else {
            mangTam[dem] = a[dem2];
            ++dem;
            ++dem2;
        }
    }
    while(dem1 <= m) {
        mangTam[dem] = a[dem1];
        ++dem1;
        ++dem;
    }
    while(dem2 <= r) {
        mangTam[dem] = a[dem2];
        ++dem2;
        ++dem;
    }
    int j = 0;
    for(int i = l; i <= r; ++i) {
        a[i] = mangTam[j];
        ++j;
    }
}

void mergeSort(int a[], int l, int r) {
    if(l >= r) return;
    int m = (l + r) / 2;
    mergeSort(a, l, m);
    mergeSort(a, m + 1, r);
    merge(a, l, m , r);
}

int main() {
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    mergeSort(a, 0, n - 1);
    for(int i = 0; i < n; ++i) cout << a[i] << " ";
    return 0;
}