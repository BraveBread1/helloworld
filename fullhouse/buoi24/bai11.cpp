#include<iostream>
#include<sstream>
#include<algorithm>

using namespace std;

class luong{
    private:
    string name, chuc, mnv;
    int thang, ngay, cong, thuong, phu, thuc;
    static int cnt;
    static int tong;
    public:
    luong();
    friend istream& operator >> (istream& in, luong &a);
    friend ostream& operator << (ostream& out, luong a);
    void cal();
    void chuanHoa();
    int getThuc();
    friend bool comp(luong a, luong b);
};

int luong::getThuc() {
    return thuc;
}

int luong::cnt = 0;

luong::luong() {
    ++cnt;
    mnv = "NV" + string(2 - to_string(cnt).size(), '0') + to_string(cnt);
}

void luong::cal() {
    thang = ngay * cong;
    if(cong >= 25) {
        thuong = 0.2 * thang;
    }
    else if(cong >= 22 && cong <= 25) {
        thuong = 0.1 * thang;
    }
    else thuong = 0;
    if(chuc == "GD") phu = 250000;
    else if(chuc == "PGD") phu = 200000;
    else if(chuc == "TP") phu = 180000;
    else phu = 150000;
    thuc = thang + thuong + phu;
}

istream& operator >> (istream& in, luong &a) {
    in.ignore();
    getline(in, a.name);
    in >> a.ngay >> a.cong >> a.chuc;
    return in;
}

ostream& operator << (ostream &out, luong a) {
    out << a.mnv << " " << a.name << " " << a.thang << " " << a.thuong << " " << a.phu << " " << a.thuc << endl;
    return out;
}

void luong::chuanHoa() {
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

bool comp(luong a, luong b) {
    if(a.thuc > b.thuc) return true;
    else if(a.thuc < b.thuc) return false;
    else {
        return a.mnv > b.mnv;
    }
}

int main() {
    int n; cin >> n;
    luong* a = new luong[n];
    int tong = 0;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        a[i].cal();
        a[i].chuanHoa();
        tong += a[i].getThuc();
    }
    sort(a, a + n, comp);
    for(int i = 0; i < n; ++i) {
        cout << a[i];
    }
    cout << "Tong chi phi tien luong: " << tong;
    return 0;
}