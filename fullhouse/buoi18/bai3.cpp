#include<iostream>
#include<map>

using namespace std;

int main() {
    string s; 
    cin >> s;
    map<char, int> c;
    for(string::iterator it = s.begin(); it != s.end(); ++it) {
        ++c[*it];
    }
    for(map<char, int>::iterator it = c.begin(); it != c.end(); ++it) {
        cout << it->first << " " << it->second << endl;
    }
    cout << endl;
    for(string::iterator it = s.begin(); it != s.end(); ++it) {
        if(c[*it]) {
            cout << *it << " " << c[*it] << endl;
            c[*it] = 0;
        }
    }
    return 0;
}