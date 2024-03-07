#include<iostream>
#include<set>

using namespace std;

void nhapset(string s, set<char> &xh) {
    for(string::iterator it = s.begin(); it != s.end(); ++it) {
        xh.insert(*it);
    }
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    set<char> xh;
    nhapset(s1, xh);
    set<char> s;
    for(string::iterator it = s2.begin(); it != s2.end(); ++it) {
        if(xh.count(*it)) {
            s.insert(*it);
        }
    }
    for(set<char>::iterator it = s.begin(); it != s.end(); ++it) {
        cout << *it;
    }
    cout << endl;
    nhapset(s2, xh);
    for(set<char>::iterator it = xh.begin(); it != xh.end(); ++it) {
        cout << *it;
    }
    return 0;
}