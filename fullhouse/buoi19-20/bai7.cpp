#include<iostream>
#include<sstream>

using namespace std;

struct nhan_vien{
    string mnv, name, gender, birth, addr, taxNum, date;
    friend istream& operator >> (istream& in, nhan_vien &a) {
        getline(in, a.name);
        getline(in, a.gender);
        getline(in, a.birth);
        getline(in, a.addr);
        getline(in, a.taxNum);
        getline(in, a.date);
        return in;
    }
    friend ostream& operator << (ostream& out, nhan_vien &a) {
        out << a.mnv << " " << a.name << " " << a.gender << " " << a.birth << " " << a.addr << " " << a.taxNum << " " << a.date << endl;
        return out;
    }
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



// istream& operator >> (istream& in, nhan_vien &a) {
//     getline(in, a.name);
//     getline(in, a.gender);
//     getline(in, a.birth);
//     getline(in, a.addr);
//     getline(in, a.taxNum);
//     getline(in, a.date);
//     return in;
// }

// ostream& operator << (ostream& out, nhan_vien &a) {
//     out << a.mnv << " " << a.name << " " << a.gender << " " << a.birth << " " << a.addr << " " << a.taxNum << " " << a.date << endl;
//     return out;
// }

int main() {
    int n; cin >> n;
    cin.ignore();
    nhan_vien *a = new nhan_vien[n + 1];
    for(int i = 1; i <= n; ++i) {
        cin >> a[i];
        a[i].mnv = string(5 - to_string(i).size(), '0') + to_string(i);
        chuan(a[i].birth);
        chuan(a[i].date);
    }
    for(int i = 1; i <= n; ++i) {
        cout << a[i];
    }
    return 0;
}