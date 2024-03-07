#include<iostream>

using namespace std;

int main() {
    string n;
    getline(cin, n);
    bool a[91];
    for(int i = 65; i <= 90; ++i) a[i] = false;
    for(string::iterator it = n.begin(); it != n.end(); ++it) {
        if(*it >= 'a' && *it <= 'z') a[*it - 32] = true;
        else if(*it >= 'A' && *it <= 'Z') a[*it] = true;
    }
    for(int i = 65; i <= 90; ++i) {
        if(!a[i]) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}