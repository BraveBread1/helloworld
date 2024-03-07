#include<iostream>
#include<map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    for(t; t > 0; --t) {
        multimap<int, int> m;
        int n; cin >> n;
        for(int i = 1; i <= n; ++i) {
            int a, x;
            cin >> a >> x;
            m.insert({a, x});
        }
        multimap<int, int>::iterator it = m.begin();
        int minn = 0;
        int maxn = 2000000000;
        int k = 0;
        while(it != m.end()) {
            if(it->first == 1) {
                if(it->second > minn) minn = it->second;
            }
            else if(it->first == 2) {
                if(it->second < maxn) maxn = it->second;
            }
            else if(it->first == 3) {
                if(it->second >= minn && it->second <= maxn) {
                    ++k;
                }
            }
            ++it;
        }
        int result;
        if(maxn < minn + k) result = 0;
        else{
            result = maxn - minn + 1 - k;
        }
        cout << result << endl;
    }
    return 0;
}