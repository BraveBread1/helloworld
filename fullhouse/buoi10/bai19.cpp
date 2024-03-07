#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool comp(pair<int, int> a, pair<int, int> b) {
    if(a.second < b.second) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int n; cin >> n;
    vector< pair<int, int>> v;
    for(int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }
    sort(v.begin(), v.end(), comp);
    int cnt = 0;
    int end = 0;
    for(auto x : v) {
        if(x.first > end) {
            ++cnt;
            end = x.second;
        }
    }
    cout << cnt;
    return 0;
}