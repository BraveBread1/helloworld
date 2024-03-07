#include<iostream>
#include<sstream>
#include<iomanip>
#include<algorithm>

using namespace std;

class nguoi{
    private:
    string name, date, gender;
    public:
    string getName() {
        return name;
    }
    string getDate() {
        return date;
    }
    string getGender() {
        return gender;
    }
    void setName(string a) {name = a;}
    void setDate(string a) {date = a;}
    void setGender(string a) {gender = a;}
    friend istream& operator >> (istream& in, nguoi &a) {
        in.ignore();
        getline(in, a.name);
        in >> a.date >> a.gender;
        return in;
    }
    friend void nhap(nguoi &a) {
        cin >> a;
    }
    friend void chuan(nguoi &a);
};

class hoc_sinh : public nguoi{
    private:
    string msv, lop;
    double gpa;
    static int cnt;
    public:
    hoc_sinh();
    friend istream& operator >> (istream& in, hoc_sinh &a);
    friend ostream& operator << (ostream& out, hoc_sinh a);
    friend bool comp1(hoc_sinh a, hoc_sinh b);
};

bool comp1(hoc_sinh a, hoc_sinh b) {
    if(a.gpa > b.gpa) return true;
    else if(a.gpa < b.gpa) return false;
    else {
        return a.msv > b.msv;
    }
}

int hoc_sinh::cnt = 0;

hoc_sinh::hoc_sinh() {
    ++cnt;
    msv = "SV" + string(3 - to_string(cnt).size(), '0') + to_string(cnt);
}

istream& operator >> (istream& in, hoc_sinh &a) {
    nhap(a);
    in >> a.gpa >> a.lop;
    return in;
}

ostream& operator << (ostream& out, hoc_sinh a) {
    out << a.msv << " " << a.getName() << " " << a.getDate() << " " << a.getGender() << " " << fixed << setprecision(2) << a.gpa  << " " << a.lop << endl;
    return out;
}

class giao_vien : public nguoi {
    private:
    string mgv, mon;
    int so_luong;
    static int cnt;
    public:
    giao_vien();
    friend istream& operator >> (istream& in, giao_vien &a);
    friend ostream& operator << (ostream& out, giao_vien a);
    friend bool comp2(giao_vien a, giao_vien b);
};

bool comp2(giao_vien a, giao_vien b) {
    if(a.so_luong > b.so_luong) return true;
    else if(a.so_luong < b.so_luong) return false;
    else {
        string s1, s2;
        stringstream ssa(a.getDate());
        stringstream ssb(b.getDate());
        string tmp;
        while(getline(ssa, tmp, '/')) {
            s1 = tmp + s1;
        }
        while(getline(ssb, tmp, '/')) {
            s2 =tmp + s2;
        }
        if(s1 < s2) {
            return true;
        }
        else {
            return false;
        }
    }
}

int giao_vien::cnt = 0;

giao_vien::giao_vien() {
    ++cnt;
    mgv = "GV" + string(3 - to_string(cnt).size(), '0') + to_string(cnt);
}

istream& operator >> (istream& in, giao_vien &a) {
    nhap(a);
    in.ignore();
    getline(in, a.mon);
    in >> a.so_luong;
    return in;
}

ostream& operator << (ostream& out, giao_vien a) {
    out << a.mgv << " " << a.getName() << " " << a.getDate() << " " << a.getGender() << " " << a.mon << " " << a.so_luong << endl;
    return out;
}

void chuan(nguoi &a) {
    stringstream ss (a.getDate());
    string result;
    string tmp;
    int cnt = 1;
    while(getline(ss, tmp, '/')) {
        if(cnt < 3) {
            if(tmp.size() < 2) {
                tmp = "0" + tmp + "/";
                result += tmp;
            }
            else {
                tmp = tmp + "/";
                result += tmp;
            }
            ++cnt;
        }
        else {
            result += tmp;
        }
    }
    a.setDate(result);
    stringstream ss2 (a.getName());
    result = "";
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
        result += tmp + " ";
    }
    a.setName(result);
}

int main() {
    int n, m; cin >> n >> m;
    hoc_sinh *hs = new hoc_sinh [n];
    giao_vien* gv = new giao_vien[n];
    for(int i = 0; i < n; ++i) {
        cin >> hs[i];
        chuan(hs[i]);
    }
    sort(hs, hs + n, comp1);
    for(int i = 0; i < m; ++i) {
        cin >> gv[i];
        chuan(gv[i]);
    }
    sort(gv, gv + m, comp2);
    cout << "DANH SACH HOC SINH :" << endl;
    for(int i = 0; i < n; ++i) {
        cout << hs[i];
    }
    cout << "DANH SACH GIAO VIEN :" << endl;
    for(int i = 0; i < m; ++i) {
        cout  << gv[i];
    }
    return 0;
}