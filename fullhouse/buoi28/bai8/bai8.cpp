#include<iostream>
#include<fstream>
#include<vector>
#include<map>
#include<sstream>

using namespace std;

string creatEmail(string s) {
    stringstream ss (s);
    string tmp;
    int dem = 0;
    while(ss >> tmp) {
        ++dem;
    }
    stringstream ss1 (s);
    string result;
    int cnt = 1;
    while(ss1 >> tmp) {
        if(cnt < dem) {
            if(tmp[0] >= 'A' && tmp[0] <= 'Z') {
                tmp[0] += 32;
            }
            result += tmp[0];
            ++cnt;
        }
        else {
            for(string::iterator it = tmp.begin(); it != tmp.end(); ++it) {
                if(*it >= 'A' && *it <= 'Z') {
                    *it += 32;
                }
            }
            result = tmp + result;
        }
    }
    return result;
}

int main() {
    ifstream in;
    in.open("Data.txt");
    ofstream out;
    out.open("Email.txt");
    string name;
    string birth;
    map<string, int> m;
    while(getline(in, name)) {
        getline(in, birth);
        string email = creatEmail(name);
        if(m[email]) {
            ++m[email];
            email += to_string(m[email]) + "@P.edu.vn";
            out << email << endl;
        }
        else {
            ++m[email];
            email += "@P.edu.vn";
            out << email << endl;
        }
        birth.erase(2, 1);
        birth.erase(4, 1);
        out << birth << endl;
    }
    in.close();
    out.close();
    return 0;
}