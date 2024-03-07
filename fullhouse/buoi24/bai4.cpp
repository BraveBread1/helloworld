#include<iostream>
#include<sstream>

using namespace std;

class sinhVien{
    private:
        string msv, name, lop, date;
        double gpa;
    public:
        sinhVien();
        friend istream& operator >> (istream& in, sinhVien &a);
        friend ostream& operator << (ostream& out, sinhVien a);
        friend void chuan(sinhVien &a);
};

sinhVien::sinhVien() {
    msv = "SV001";
}

istream& operator >> (istream& in, sinhVien &a) {
    getline(in, a.name);
    in >> a.lop >> a.date >> a.gpa;
    return in;
}

ostream& operator << (ostream& out , sinhVien a) {
    out << a.msv << " " << a.name << " " << a.lop << " " << a.date << " " << a.gpa << endl;
    return out;
}

void chuan(sinhVien &a) {
    stringstream ss (a.date);
    a.date = "";
    string tmp;
    int cnt = 1;
    while(getline(ss, tmp, '/')) {
        if(cnt < 3) {
            if(tmp.size() < 2) {
                tmp = "0" + tmp + "/";
                a.date += tmp;
            }
            else {
                tmp = tmp + "/";
                a.date += tmp;
            }
            ++cnt;
        }
        else {
            a.date += tmp;
        }
    }
    stringstream ss2 (a.name);
    a.name = "";
    while(ss2 >> tmp) {
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
        a.name += tmp + " ";
    }
}

int main() {
    sinhVien a;
    cin >> a;
    chuan(a);
    cout <<  a;
    return 0;
}