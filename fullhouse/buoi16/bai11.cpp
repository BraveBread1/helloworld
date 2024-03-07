#include<iostream>
#include<map>

using namespace std;

int main() {
    string s; cin >> s;
    map<char, int> ts;
    for(string::iterator it = s.begin(); it != s.end(); ++it) {
        ++ts[*it];
    }
    int max = 0;
    char c;
    for(map<char, int>::iterator it = ts.begin(); it != ts.end(); ++it) {
        if((*it).second >= max) {
            max = (*it).second;
            c = (*it).first;
        }
    }
    cout << c << " " << max;
    return 0;
}