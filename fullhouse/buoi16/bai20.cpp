#include<iostream>

using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    for(string::iterator it = s.begin(); it != s.end(); ++it) {
        if(*it == t[0]) {
            bool cs = true;
            string::iterator test = it;
            for(string::iterator it1 = t.begin(); it1 != t.end(); ++it1) {
                if(*it1 != *test) {
                    cs = false;
                    break;
                }
                ++test;
            }
            if(cs) {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}