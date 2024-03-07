#include<iostream>
#include<sstream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    string n;
    getline(cin, n);
    vector<string> xau1;
    string tmp;
    stringstream ss(n);
    while(ss >> tmp) {
        if(find(xau1.begin(), xau1.end(), tmp) == xau1.end()) xau1.push_back(tmp);
    }
    sort(xau1.begin(), xau1.end());
    for(vector<string>::iterator it = xau1.begin(); it != xau1.end(); ++it) {
        cout << *it << " ";
    }
    vector<string> xau2;
    cout << endl;
    stringstream ss1(n);
    while(ss1 >> tmp) {
        if(find(xau2.begin(), xau2.end(), tmp) == xau2.end()) xau2.push_back(tmp);
    }
    for(vector<string>::iterator it = xau2.begin(); it != xau2.end(); ++it) {
        cout << *it << " ";
    }
    return 0;
}