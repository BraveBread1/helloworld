#include<iostream>
#include<fstream>
#include<sstream>
#include<vector>
#include<algorithm>

using namespace std;

void chuanHoa(string &s) {
    stringstream ss (s);
    s = "";
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
        s += tmp + " ";
    }
    s.pop_back();
}

bool comp(string a, string b) {
    stringstream ss1(a);
    stringstream ss2(b);
    string tmp1, tmp2;
    while(ss1 >> tmp1);
    while(ss2 >> tmp2);
    if(tmp1 != tmp2) return tmp1 < tmp2;
    else return a < b;
}

int main() {
    ifstream in;
    in.open("Name.txt");
    ofstream out;
    out.open("Convert.txt");
    string tmp;
    vector<string> v;
    while(getline(in, tmp)) {
        chuanHoa(tmp);
        v.push_back(tmp);
    }
    sort(v.begin(), v.end(), comp);
    for(string x : v) out << x << endl;
    return 0;
}