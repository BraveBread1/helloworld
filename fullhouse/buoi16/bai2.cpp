#include<iostream>

using namespace std;

int main() {
    string n;
    getline(cin, n);
    int so = 0;
    int chu = 0;
    int kiTu = 0;
    for(string::iterator it = n.begin(); it != n.end(); ++it) {
        if(*it >= '0' && *it <= '9') ++so;
        else if((*it >= 'a' && *it <= 'z') || (*it >= 'A' && *it <= 'Z')) ++chu;
        else ++kiTu;
    }
    cout << chu << " " << so << " " << kiTu;
    return 0;
}