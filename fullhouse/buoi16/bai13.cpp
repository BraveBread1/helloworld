#include<iostream>
#include<sstream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    stringstream ss (s);
    vector<string> v;
    string tmp;
    while(ss >> tmp) {
        v.push_back(tmp);
    }
    sort(v.begin(), v.end());
    for(vector<string>::iterator it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";
    }
    return 0;
}