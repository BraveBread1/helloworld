#include<iostream>

using namespace std;

int main() {
    string s; cin >> s;
    int cnt = 0;
    for(string::iterator it = s.begin(); it != s.end(); ++it) {
        if(*it >= '0' && *it <= '9') ++cnt;
    }
    cout << cnt;
    return 0;
}