#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n];
    int max = 0;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        if(a[i] > max) max = a[i];
    }
    vector<bool> v(max + 1, false);
    for(int i = 0; i < n; ++i) v[a[i]] = true;
    for(int i = 0; i < n; ++i) {
        if(a[i] == max) cout << "_" << " ";
        else {
            for(int j = a[i] + 1; j <= max; ++j) {
                if(v[j]) {
                    cout << j << " ";
                    break;
                }
            }
        }
    }
    return 0;
}