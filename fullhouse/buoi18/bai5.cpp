#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool comp(string a, string b) {
    if(a > b) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    string s;
    cin >> s;
    vector<string> v;
    string tmp;
    for(string::iterator it = s.begin(); it != s.end(); ++it) {
        while(it != s.end() && *it >= '0'&& *it <= '9') {
            tmp += *it;
            ++it;
        }
        
        for(string::iterator it = tmp.begin(); it != tmp.end(); ++it) {
            if(*it != '0') {
                break;
            }
            else {
                tmp.erase(it);
            }
        }
        v.push_back(tmp);
        tmp = "";
        if(it == s.end()) {
            break;
        }
    }
    sort(v.begin(), v.end(), comp);
    for(vector<string>::iterator it = v.begin(); it != v.end(); ++it) {
        tmp += *it;
    }
    cout << tmp;
    return 0;
}