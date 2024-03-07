#include<iostream>
#include<sstream>
using namespace std;

bool xauThuanNghich(string tmp) {
    string::iterator it1 = tmp.begin();
    string::iterator it2 = --tmp.end();
    while(it1 < it2) {
        if(*it1 != * it2) return false;
        ++it1;
        --it2;
    }
    return true;
}

int main() {
    string n;
    getline(cin, n);
    stringstream ss(n);
    string tmp;
    while(ss >> tmp) {
        if(xauThuanNghich(tmp)) cout << tmp << " ";
    }
    return 0;
}