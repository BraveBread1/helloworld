#include<iostream>
#include<string>

using namespace std;

int main() {
    string s; cin >> s;
    int max = 0;
    char letter = s[0];
    char c = s[0];
    int cnt = 0;
    for(string::iterator it = s.begin(); it != s.end(); ++it) {
        while(it != s.end() && *it == c) {
            ++cnt;
            ++it;
        }
        if(cnt > max) {
            max = cnt;
            letter = *(it - 1);
        }
        else if(cnt == max && letter < *(it - 1)) {
            letter = *(it - 1);
        }
        if(it != s.end() && *it != c) {
            c = *it;
            cnt = 1;
        }
        if(it == s.end()) {
            break;
        }
    }
    for(int i = 1; i <= max; ++i) {
        cout << letter;
    }
    return 0;
}