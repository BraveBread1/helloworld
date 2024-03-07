#include<iostream>
#include<set>

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    multiset<int> a;
    for(int i = 0; i < n; ++i) {
        int x; cin >> x;
        a.insert(x);
    }
    multiset<int> b;
    for(int i = 0; i < m; ++i) {
        int x; cin >> x;
        b.insert(x);
    }
    int dem = 0;
    multiset<int>::iterator it1 = a.begin(), it2 = b.begin();
    while(it1 != a.end() && it2 != b.end()) {
        if(*it1 >= *it2 - k && *it1 <= *it2 + k) {
            ++dem;
            ++it1;
            ++it2;
        }
        else if(*it1 > *it2 + k) {
            ++it2;
        }
        else if(*it1 < *it2 - k) ++it1;
    }
    cout << dem;
    return 0;
}