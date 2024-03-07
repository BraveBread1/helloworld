#include<iostream>
#include<set>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    multiset<int> weight;
    for(int i = 0; i < n; ++i) {
        int p; cin >> p;
        weight.insert(p);
    }
    
    int cnt = 0;
    
    while (!weight.empty()) {
        auto it = weight.upper_bound(x - *weight.begin());
        if (it != weight.begin()) {
            --it;
            weight.erase(weight.begin());
            weight.erase(it);
        } else {
            weight.erase(weight.begin());
        }
        ++cnt;
    }
    
    cout << cnt << endl;
    
    return 0;
}
