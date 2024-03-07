#include<iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    int max = 0;
    string tmp;
    tmp += s[0];
    string result;
    char letter = s[0];
    int cnt = 0;
    for(string::iterator it = s.begin(); it != s.end(); ++it) {
        while(it != s.end() && *it != letter) {
            ++cnt;
            letter = *it;
            tmp += *it;
        }
        if(cnt > max) {
            max = cnt;
            result = tmp;
        }
        else if(cnt == max && tmp > result) {
            result = tmp;
        }
        if(*it == *(it - 1)) {
            cnt = 1;
            tmp = *it;
        }
    }
    cout << result;
    return 0;
}