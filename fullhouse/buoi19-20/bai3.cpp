#include<iostream>
#include<sstream>
#include<iomanip>

using namespace std;

struct sinhVien{
    string name, lop, birth;
    double gpa;
    const string msv = "SV001";
};

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
}

int main() {
    sinhVien a;
    getline(cin, a.name);
    getline(cin, a.lop);
    getline(cin, a.birth);
    cin >> a.gpa;
    chuanHoa(a.name);
    chuan(a.birth);
    cout << a.msv << " " << a.name << a.lop << " " << a.birth << " " << fixed << setprecision(1) << a.gpa;
    return 0;
}