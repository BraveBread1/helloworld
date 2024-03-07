#include<iostream>
#include<sstream>
#include<vector>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    stringstream ss (s);
    string tmp;
    string result;
    int cnt = 1;
    while(ss >> tmp) {
        if(cnt < 3) {
            if(tmp[0] >= 'A' && tmp[0] <= 'Z') {
                tmp[0] += 32;
                result += tmp[0];
                ++cnt;
            }
        }
        else {
            for(string::iterator it = tmp.begin(); it != tmp.end(); ++it) {
                if(*it >= 'A' && *it <= 'Z') {
                    *it += 32;
                }
            }
            result = tmp + result;
        }
    }
    cout << result << "@gmail.com";
    return 0;
}