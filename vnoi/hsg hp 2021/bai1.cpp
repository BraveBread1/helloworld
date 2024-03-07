#include<iostream>
#include<vector>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    vector<char> v;
    for(string::iterator it = s.begin(); it != s.end(); ++it) {
        if((*it >= 'a' && *it <= 'z') || (*it >= 'A' && *it <= 'Z')) {
            v.push_back(*it);
        }
    }
    for(vector<char>::iterator it = v.begin(); it != v.end(); ++it) {
        cout << *it;
    }
    return 0;
}