#include<iostream>
#include<sstream>

using namespace std;

int main() {
    string n;
    getline(cin, n);
    stringstream ss(n);
    int dem = 0;
    string tmp;
    while(ss >> tmp){
        ++dem;
    }
    cout << dem;
    return 0;
}