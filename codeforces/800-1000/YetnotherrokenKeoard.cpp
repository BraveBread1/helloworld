#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    for(t; t > 0; --t) {
        string s; cin >> s;
        string v;
        vector<int> low, up;
        for(string::iterator it = s.begin(); it != s.end(); ++it) {
            if(*it == 'b' && !low.empty()) {
                v.erase(*low.rbegin(), 1);
                if(!up.empty()){
                    for(vector<int>::reverse_iterator a = up.rbegin(); a != up.rend() && *a > *low.rbegin(); ++a) {
                        --*a;
                    }
                }
                low.pop_back();
            }
            else if(*it == 'B' && !up.empty()) {
                v.erase(*up.rbegin(), 1);
                if(!low.empty()) {
                    for(vector<int>::reverse_iterator a = low.rbegin(); a != low.rend() && *a > *up.rbegin(); ++a) {
                        --*a;
                    }
                }
                up.pop_back();
            }
            else if(*it != 'B' && *it != 'b'){
                v.push_back(*it);
                if(*it >= 'a' && *it <= 'z') {
                    low.push_back(v.size() - 1);
                }
                else if(*it >= 'A' && *it <= 'Z') {
                    up.push_back(v.size() - 1);
                }
            }
        }
        cout << v << endl;
    }
    return 0;
}