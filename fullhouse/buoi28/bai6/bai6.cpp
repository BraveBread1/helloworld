#include<iostream>
#include<fstream>
#include<sstream>

using namespace std;

void chuan(string &s) {
    stringstream ss (s);
    s = "";
    string tmp;
    int cnt = 1;
    while(getline(ss, tmp, '/')) {
        if(cnt < 3) {
            if(tmp.size() < 2) {
                tmp = "0" + tmp + "/";
                s += tmp;
            }
            else {
                tmp = tmp + "/";
                s += tmp;
            }
            ++cnt;
        }
        else {
            s += tmp;
        }
    }
}

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

int main() {
    ifstream in;
    in.open("Data.txt");
    string name, birth;
    getline(in, name);
    getline(in, birth);
    chuanHoa(name);
    chuan(birth);
    ofstream out;
    out.open("SinhVien.txt");
    out << name << endl << birth;
    in.close();
    out.close();
    return 0;
}