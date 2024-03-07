#include<iostream>
#include<map>

using namespace std;

int main() {
    int n;
    long long x;
    cin >> n >> x;
    multimap<int, int> t;
    for(int i = 0; i < n; ++i) {
        int x, y; cin >> x >> y;
        t.insert({x, y});
    }
    long long l = 0;
    long long r = 9223372036854775807;
    long long res = 0;
    while(l <= r) {
        long long m = (l + r) / 2;
        long long sum = 0;
        for(map<int, int>::iterator it = t.begin(); it != t.end(); ++it) {
            if(m >= it->first) sum += 1 + (m - it->first) / it->second;
        }
        if(sum < x) l = m + 1;
        else if(sum >= x) {
            res = m;
            r = m - 1;
        }
    }
    cout << res;
    return 0;
}