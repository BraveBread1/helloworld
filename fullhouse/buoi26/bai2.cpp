#include<iostream>
#include<sstream>
#include<algorithm>

using namespace std;

class human{
    private:
        string name, date, gender;
    public:
        void setName(string a) {
            this->name = a;
        }
        void setDate(string a) {
            this->date = a;
        }
        void setGender(string a) {
            this->gender = a;
        }
        string getName() {
            return name;
        }
        string getDate() {
            return date;
        }
        string getGender() {
            return gender;
        }
};

class employee : public human{
    private:
        int thang, ngay, cong, thuong, phu, thuc;
        string chuc, mnv;
        static int cnt;
    public:
    friend istream& operator >> (istream& in, employee &a) {
        string tmp;
        in.ignore();
        getline(in, tmp);
        a.setName(tmp);
        in >> tmp;
        a.setDate(tmp);
        in >> tmp;
        a.setGender(tmp);
        in >> a.ngay >> a.cong >> a.chuc;
        return in;
    }
    friend ostream& operator << (ostream& out, employee a) {
        out << a.mnv << " " << a.getName() << " " << a.getDate() << " " << a.getGender() << " " << a.thang << " " << a.thuong << " " << a.phu << " " << a.thuc << endl;
        return out;
    }
    employee();
    friend void chuan(employee &a);
    void cal();
    friend bool comp(employee a, employee b);
    int getThuc() {
        return thuc;
    }
};

employee::employee() {
    ++cnt;
    mnv = "NV" + string(2 - to_string(cnt).size(), '0') + to_string(cnt);
}

int employee::cnt = 0;

void chuan(employee &a) {
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

void employee::cal() {
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

bool comp(employee a, employee b) {
    if(a.thuc > b.thuc) return true;
    else if(a.thuc < b.thuc) return false;
    else {
        return a.mnv > b.mnv;
    }
}

int main() {
    int n; cin >> n;
    employee *a = new employee[n];
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        chuan(a[i]);
        a[i].cal();
    }
    sort(a, a + n, comp);
    int tong = 0;
    for(int i = 0; i < n; ++i) {
        cout << a[i];
        tong += a[i].getThuc();
    }
    cout << "Tong chi phi tien luong: " << tong;
    return 0;
}