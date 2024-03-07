#include<iostream>

using namespace std;

int main() {
    string s; cin >> s;
    int cnt = 0;
    for(string::iterator it = s.begin(); it != s.end(); ++it) {
        if(*it == 'v') {
            string tmp;
            string::iterator x = it;
            for(int i = 1; i <= 5 && x != s.end(); ++i) {
                tmp += *x;
                ++x;
            }
            if(tmp == "virus") ++cnt;
        }
    }
    cout << cnt;
    return 0;
}