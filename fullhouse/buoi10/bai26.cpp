#include<iostream>
#include<set>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    multiset<int> price;
    for(int i = 0; i < n; ++i) {
        int x; cin >> x;
        price.insert(x);
    }
    for(int i = 0; i < m; ++i) {
        int x; cin >> x;
        if(price.empty()) {
            cout << "-1" << endl;
            continue;
        }
        multiset<int>::iterator it = price.upper_bound(x);
        if(it == price.begin()) {
            cout << "-1" << endl;
        }
        else {
            --it;
            cout << *it << endl;
            price.erase(it);
        }
    }
    return 0;
}