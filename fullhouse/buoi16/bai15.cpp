#include<iostream>
#include<sstream>
#include<vector>

using namespace std;

void chuanHoa(string &s) {
    stringstream ss (s);
    string tmp;
    while(ss >> tmp) {
        string::iterator it = tmp.begin();
        if(*it >= 'a' && *it <= 'z') {
            *it -= 32;
        }
        ++it;
        while(it != tmp.end()) {
            if(*it >= 'A' && *it <= 'Z') {
                *it += 32;
            }
            ++it;
        }
        cout << tmp << " ";
    }
}

int main() {
    int t; cin >> t;
    cin.ignore();
    vector<string> name;
    for(int i = 0; i < t; ++i) {
        string tmp;
        getline(cin, tmp);
        name.push_back(tmp);
    }
    for(int i = 0; i < t; ++i) {
        chuanHoa(name[i]);
        cout << endl;
    }
    return 0;
}