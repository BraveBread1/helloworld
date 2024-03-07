#include<iostream>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    bool cs = false;
    int a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < n; ++i) {
        if(a[i] == x){
            cs = true;
            for(int b = i ; b < n - 1; ++b) {
                a[b] = a[b + 1];
            }
            break;
        }
    }
    if(cs == false) {
        cout << "NOT FOUND";
        return 0;
    }
    for(int i = 0; i < n - 1; ++i) cout << a[i] << " ";
    return 0;
}