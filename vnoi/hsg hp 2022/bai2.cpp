#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool comp(int &a, int &b) {
    string t1 = to_string(a);
    string t2 = to_string(b);
    int i = 1;
    while(i <= t1.size() && i <= t2.size()) {
        if(stoi(t1.substr(0, i)) < stoi(t2.substr(0, i))) return false;
        else if(stoi(t1.substr(0, i)) > stoi(t2.substr(0, i))) return true;
        else {
            ++i;
        }
    }
    return a > b;
}

int main() {
    int n; cin >> n;
    vector<int> a;
    int max = 0;
    for(int i = 0; i < n; ++i) {
        int x; cin >> x;
        a.push_back(x);
        if(x > max) max = a[i];
    }
    sort(a.begin(), a.end(), comp);
    string tmp;
    for(int i = 0; i < n; ++i) {
        tmp += to_string(a[i]);
    }   
    cout << tmp;
    return 0;
}