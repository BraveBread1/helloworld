#include<iostream>
#include<set>

using namespace std;

int main() {
    int n, k; cin >> n >> k;
    int *a = new int[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    if(n <= 5000) {
        for(int i = 0; i < n; ++i) {
            for(int j = i + 1; j < n; ++j) {
                if((a[i] + a[j]) / 2 == k) {
                    cout << i + 1 << " " << j + 1;
                    return 0;
                }
            }
        }
        cout << '0' << " " << '0';
    }
    else {
        set<int> s;
        for(int i = 0; i < n; ++i) {
            s.insert(a[i]);
        }
        int p = 0, q = 0;
        for(set<int>::iterator it = s.begin(); it != s.end(); ++it) {
            if(s.count(2 * k - *it)) {
                for(int i = 0; i < n; ++i) {
                    if(a[i] == *it) p = i + 1;
                    if(a[i] == 2 * k - *it) q = i + 1;
                }
                break;
            }
        }
        cout << p << " " << q;
    }
    return 0;
}