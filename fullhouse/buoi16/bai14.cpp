#include<iostream>
#include<vector>
#include<algorithm>
#include<sstream>

using namespace std;

bool comp(string s1, string s2) {
    if(s1.size() > s2.size()) return false;
    else if(s1.size() == s2.size()) {
        if(s1 < s2) return true;
        else return false;
    }
    else return true;
}

int main() {
    string s;
    getline(cin, s);
    stringstream ss (s);
    vector<string> v;
    string tmp;
    while(ss >> tmp) {
        v.push_back(tmp);
    }
    sort(v.begin(), v.end(), comp);
    for(vector<string>::iterator it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";
    }
    return 0;
}