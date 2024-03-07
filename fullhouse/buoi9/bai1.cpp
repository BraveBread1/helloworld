#include<iostream>

using namespace std;

void selectionsort(int n, int a[]) {
    for(int i = 0; i < n - 1; ++i) {
        int min_index = i;
        for(int j = i + 1; j < n; ++j) {
            if(a[j] < a[min_index]) {
                min_index = j;
            }
        }
        int x = a[i];
        a[i] = a[min_index];
        a[min_index] = x;
        cout << "Buoc " << i + 1 << ":";
        for(int i = 0; i < n; ++i) cout << " " << a[i];
        cout << endl;
    }
}

int main() {
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    selectionsort(n, a);
    return 0;
}