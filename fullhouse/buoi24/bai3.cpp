#include<iostream>
#include<iomanip>
#include<sstream>

using namespace std;

class sinhVien{
    private:
        string name, date;
        double d1, d2, d3, sum;
    public:
        friend istream& operator >> (istream& in, sinhVien &a);
        friend ostream& operator << (ostream& out, sinhVien a);
        void setSum();
        friend void chuan(sinhVien &a);
};

istream& operator >> (istream& in, sinhVien &a) {
    getline(in, a.name);
    in >> a.date >> a.d1 >> a.d2 >> a.d3;
    return in;
}

ostream& operator << (ostream& out, sinhVien a) {
    cout << a.name << " " << a.date << " " << fixed << setprecision(1) << a.sum << endl;
    return out;
}

void sinhVien::setSum() {
    sum = d1 + d2 + d3;
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
    a.setSum();
    chuan(a);
    cout << a;
    return 0;
}