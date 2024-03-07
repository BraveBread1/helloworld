#include<iostream>

using namespace std;

bool check(string n) {
    bool cs;
    for(string::iterator it = n.begin(); it != n.end() - 1; ++it) {
        if(*it < *(it + 1)) {
            cs = true;
            break;
        }
        if(*it > *(it + 1)) {
            cs = false;
            break;
        }
        if(it == n.end() - 2) {
            return true;
        }
    }
    if(cs) {
        for(string::iterator it = n.begin(); it != n.end(); ++it) {
            if(*it < *(it - 1)) {
                return false;
            }
        }
    }
    else {
        for(string::iterator it = n.begin(); it != n.end(); ++it) {
            if(*it > *(it - 1)) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    string n;
    cin >> n;
    if(check(n)) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}