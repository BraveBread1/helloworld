#include<iostream>

using namespace std;

void nhapmang(int n, int a[]) {
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }
}

void swap(int x, int y, int a[]){
    int n = a[x];
    a[x] = a[y];
    a[y] = n;
}

void interchangesort(int n, int a[]) {
    for(int i = 0; i < n - 1; ++i) {
        for(int x = i + 1; x < n; ++x) {
            if(a[x] < a[i]) {
                swap(x, i, a);
            }
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
    interchangesort(n, a);
    return 0;
}