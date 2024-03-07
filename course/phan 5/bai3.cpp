#include<iostream>

using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    int cnt = 0;
    string::iterator it1 = s.begin(), it2 = t.begin();
    while(it1 != s.end() && it2 != t.end()) {
        if(*it1 == *it2) ++cnt;
        ++it1;
        ++it2;
    }
    cout << cnt;
    return 0;
}