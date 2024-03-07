#include<iostream>
#include<vector>

using namespace std;

int main() {
    int n; cin >> n;
    int x; cin >> x;
    vector<int> v;
    for(int i = 0; i < n; ++i) {
        int x; cin >> x;
        v.push_back(x);
    }
    int index;
    bool cs = false;
    for(int i = 0; i < n; ++i) {
        if(v[i] == 0) {
            cs = true;
            index = i;
            break;
        }
    }
    if(cs == false) {
        cout << "NOT FOUND";
        return 0;
    }
    for(int i = 0; i < n - 1; ++i) cout << v[i] << " ";
    return 0;
}