#include<iostream>

using namespace std;

int main() {
    string n;
    getline(cin , n);
    for(string::iterator it = n.begin(); it != n.end(); ++it) {
        if(*it >= 'A' && *it <= 'Z') *it += 32;
    }
    cout << n;
    return 0;
}