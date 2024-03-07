#include<iostream>
#include<sstream>

using namespace std;

class nhanVien{
    private:
        string mnv, name, gender, birth, addr, tax, date;
        static int stt;
    public:
        nhanVien();
        friend istream& operator >> (istream& in, nhanVien &a);
        friend ostream& operator << (ostream& out, nhanVien a);
        friend void chuan(nhanVien &a);
};

int nhanVien::stt = 0;

nhanVien::nhanVien() {
    ++stt;
    mnv = string(5 - to_string(stt).size(), '0') + to_string(stt);

}

istream& operator >> (istream& in, nhanVien &a) {
    in.ignore();
    getline(in, a.name);
    in >> a.gender >> a.birth;
    in.ignore();
    getline(in, a.addr);
    in >> a.tax >> a.date;
    return in; 
}

ostream& operator << (ostream& out, nhanVien a) {
    out << a.mnv << " " << a.name << " " << a.gender << " " << a.birth << " " << a.addr << " " << a.tax << " " << a.date << endl;
    return out;
}

void chuan(nhanVien &a) {
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
    stringstream ss1 (a.birth);
    a.birth = "";
    cnt = 1;
    while(getline(ss1, tmp, '/')) {
        if(cnt < 3) {
            if(tmp.size() < 2) {
                tmp = "0" + tmp + "/";
                a.birth += tmp;
            }
            else {
                tmp = tmp + "/";
                a.birth += tmp;
            }
            ++cnt;
        }
        else {
            a.birth += tmp;
        }
    }
}

int main() {
    int n; cin >> n;
    nhanVien *a = new nhanVien[n];
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        chuan(a[i]);
    }
    for(int i = 0; i < n; ++i) {
        cout << a[i];
    }
    return 0;
}