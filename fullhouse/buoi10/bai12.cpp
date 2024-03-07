#include<iostream>

using namespace std;

int main() {
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    cout << a[1] - a[0] << " " << a[n - 1] - a[0] << endl;
    for(int i = 1; i < n - 1; ++i) {
        if(a[i] - a[i - 1] < a[i + 1] - a[i]) cout << a[i] - a[i - 1] << " ";
        else cout << a[i + 1] - a[i] << " ";
        if(a[n - 1] - a[i] > a[i] - a[0]) cout << a[n - 1] - a[i] << endl;
        else cout << a[i] - a[0] << endl;
    }
    cout << a[n - 1] - a[n - 2] << " " << a[n - 1] - a[0];
    return 0;
}