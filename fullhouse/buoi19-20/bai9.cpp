#include<iostream>
#include<sstream>
using namespace std;

struct sinh_vien{
    string msv, name, clas, email;
    friend istream& operator >> (istream &in, sinh_vien &a) {
        getline(in, a.msv);
        getline(in, a.name);
        getline(in, a.clas);
        getline(in, a.email);
        return in;
    }
    friend ostream& operator << (ostream &out, sinh_vien &a) {
        out << a.msv << " " << a.name << a.clas << " " << a.email << endl;
        return out;
    }
};

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
    int n; cin >> n;
    cin.ignore();
    sinh_vien *a = new sinh_vien[n + 1];
    for(int i = 1; i <= n; ++i) {
        cin >> a[i];
        chuanHoa(a[i].name);
    }
    int t; cin >> t;
    for(int i = 1; i <= t; ++i){
        string search;
        cin >> search;
        if(search == "CNTT") {
            bool cs = true;
            for(int i = 1; i <= n; ++i) {
                if(a[i].clas.substr(0, 4) == search) {
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
                if(a[i].clas.substr(0, 4) == search) {
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
                if(a[i].clas.substr(0, 2) == search) {
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
                if(a[i].clas.substr(0, 3) == search) {
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