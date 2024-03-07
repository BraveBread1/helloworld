#include<iostream>
#include<map>

using namespace std;

int main() {
    string s;
    cin >> s;
    map<char, int> ts;
    for(string::iterator it = s.begin(); it != s.end(); ++it) {
        ++ts[*it];
    }
    for(map<char,int>::iterator it = ts.begin(); it != ts.end(); ++it) {
        cout << (*it).first << " " << (*it).second << endl;
    }
    cout << endl;
    for(string::iterator it = s.begin(); it != s.end(); ++it) {
        if(ts[*it] != 0) {
            cout << *it << " " << ts[*it] << endl;
            ts[*it] = 0;
        }
    }
    return 0;
}