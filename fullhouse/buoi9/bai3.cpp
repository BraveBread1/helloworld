#include<iostream>

using namespace std;

void swap(int x, int y, int a[]){
    int n = a[x];
    a[x] = a[y];
    a[y] = n;
}

void nhapmang(int n, int a[]) {
    for(int i = 0; i < n; ++i) cin >> a[i];
}

void insertionsort(int n, int a[]) {
    for(int i = 1; i < n; ++i) {
        for(int j = i; j > 0; --j) {
            if(a[j] > a[j - 1]) break;
            swap(j, j - 1, a);
        }
    cout << "Buoc " << i + 1 << ":";
    for(int x = 0; x < n; ++x) cout << " " << a[x];
    cout << endl;
    }
}

int main() {
    int n; cin >> n;
    int a[n];
    nhapmang(n, a);
    cout << "Buoc 1:";
    for(int i = 0; i < n; ++i) cout << " " << a[i];
    cout << endl;
    insertionsort(n, a);
    return 0;
}