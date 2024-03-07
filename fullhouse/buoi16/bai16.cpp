#include<iostream>
#include<sstream>
#include<vector>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    cin.ignore();
    vector<string> tokens;
    stringstream ss (s);
    string tmp;
    int cnt = 1;
    while(getline(ss, tmp, '/')) {
        if(cnt < 3) {
            if(tmp.size() < 2) {
                tmp = "0" + tmp + "/";
                tokens.push_back(tmp);
            }
            else {
                tmp = tmp + "/";
                tokens.push_back(tmp);
            }
            ++cnt;
        }
        else {
            tokens.push_back(tmp);
        }
    }
    for(vector<string>::iterator it = tokens.begin(); it != tokens.end(); ++it) {
        cout << *it;
    }
    return 0;
}