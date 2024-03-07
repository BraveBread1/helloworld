#include<iostream>
#include<sstream>
#include<map>
#include<vector>

using namespace std;

string creatEmail(string s) {
    stringstream ss (s);
    string tmp;
    int dem = 0;
    while(ss >> tmp) {
        ++dem;
    }
    stringstream ss1 (s);
    string result;
    int cnt = 1;
    while(ss1 >> tmp) {
        if(cnt < dem) {
            if(tmp[0] >= 'A' && tmp[0] <= 'Z') {
                tmp[0] += 32;
            }
            result += tmp[0];
            ++cnt;
        }
        else {
            for(string::iterator it = tmp.begin(); it != tmp.end(); ++it) {
                if(*it >= 'A' && *it <= 'Z') {
                    *it += 32;
                }
            }
            result = tmp + result + "@gmail.com";
        }
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    map<string, int> email;
    vector<string> result;
    for(int i = 1; i <= t; ++i) {
        string s;
        getline(cin, s);
        string tmp = creatEmail(s);
        if(email.count(tmp)) {
            ++email[tmp];
            string::iterator it = tmp.begin();
            int cnt = 0;
            while(*it != '@') {
                ++cnt;
                ++it;
            }
            string stt = to_string(email[tmp]);
            tmp.insert(cnt, stt);
            result.push_back(tmp);
        }
        else {
            ++email[tmp];
            result.push_back(tmp);
        }
    }
    for(vector<string>::iterator it = result.begin(); it != result.end(); ++it) {
        cout << *it << endl;
    }
    return 0;
}