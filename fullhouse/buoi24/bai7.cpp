#include<iostream>
#include<sstream>

using namespace std;

class sinhVien{
    private:
    string msv, name, lop, email;
    public:
        friend istream& operator >> (istream &in, sinhVien &a);
        friend ostream& operator << (ostream &out, sinhVien &a);
        string getLop();
        void chuanHoa();
};

string sinhVien::getLop() {
    return lop;
}

istream& operator >> (istream &in, sinhVien &a) {
    getline(in, a.msv);
    getline(in, a.name);
    getline(in, a.lop);
    getline(in, a.email);
    return in;
}

ostream& operator << (ostream &out, sinhVien &a) {
    out << a.msv << " " << a.name << a.lop << " " << a.email << endl;
    return out;
}

void sinhVien::chuanHoa() {
    stringstream ss (name);
    name = "";
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
        name += tmp + " ";
    }
}

int main() {
    int n; cin >> n;
    cin.ignore();
    sinhVien *a = new sinhVien[n + 1];
    for(int i = 1; i <= n; ++i) {
        cin >> a[i];
        a[i].chuanHoa();
    }
    int t; cin >> t;
    for(int i = 1; i <= t; ++i){
        string search;
        cin >> search;
        if(search == "CNTT") {
            bool cs = true;
            for(int i = 1; i <= n; ++i) {
                if(a[i].getLop().substr(0, 4) == search) {
                    if(cs) {
                        cout << "DANH SACH SINH VIEN NGANH CONG NGHE THONG TIN :" << endl;
                    }
                    cs = false;
                    cout << a[i];
                }
            }
        }
        else if(search == "DTVT") {
            bool cs = true;
            for(int i = 1; i <= n; ++i) {
                if(a[i].getLop().substr(0, 4) == search) {
                    if(cs) {
                        cout << "DANH SACH SINH VIEN NGANH DIEN TU VIEN THONG :" << endl;
                    }
                    cs = false;
                    cout << a[i];
                }
            }
        }
        else if(search == "KT") {
            bool cs = true;
            for(int i = 1; i <= n; ++i) {
                if(a[i].getLop().substr(0, 2) == search) {
                    if(cs) {
                        cout << "DANH SACH SINH VIEN NGANH KE TOAN :" << endl;
                    }
                    cs = false;
                    cout << a[i];
                }
            }
        }
        else if(search == "MKT") {
            bool cs = true;
            for(int i = 1; i <= n; ++i) {
                if(a[i].getLop().substr(0, 3) == search) {
                    if(cs) {
                        cout << "DANH SACH SINH VIEN NGANH MARKETING :" << endl;
                    }
                    cs = false;
                    cout << a[i];
                }
            }
        }
    }
    return 0;
}