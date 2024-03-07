#include<iostream>

using namespace std;

int main() {
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < n; ++i) {
        if(a[i] == 42) {
            cout << "I've found the meaning of life!";
            return 0;
        }
    }
    cout << "It's a joke!";
    return 0;
}