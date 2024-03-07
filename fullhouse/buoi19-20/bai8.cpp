#include<iostream>
#include<sstream>
#include<algorithm>

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

// bool comp(nhan_vien a, nhan_vien b) {
//     stringstream ssa (a.birth);
//     stringstream ssb (b.birth);
//     string tmp;
//     int na, nb, ta, tb, ya, yb;
//     int cnt = 1;
//     while(getline(ssa, tmp, '/')){
//         if(cnt == 1) {
//             na = stoi(tmp);
//             ++cnt;
//         }
//         else if(cnt == 2) {
//             ta = stoi(tmp);
//             ++cnt;
//         }
//         else if(cnt == 3) {
//             ya = stoi(tmp);
//             cnt = 1;
//         }
//     }
//     while(getline(ssb, tmp, '/')){
//         if(cnt == 1) {
//             nb = stoi(tmp);
//             ++cnt;
//         }
//         else if(cnt == 2) {
//             tb = stoi(tmp);
//             ++cnt;
//         }
//         else if(cnt == 3) {
//             yb = stoi(tmp);
//             cnt = 1;
//         }
//     }
//     if(ya > yb) {
//         return false;
//     }
//     if(ya < yb) {
//         return true;
//     }
//     if(ta > tb) {
//         return false;
//     }
//     if(ta < tb) {
//         return true;
//     }
//     if(na > nb) {
//         return false;
//     }
//     if(na < nb) {
//         return true;
//     }
//     if(a.mnv < b.mnv) {
//         return true;
//     }
//     return false;
// }

bool comp(nhan_vien a, nhan_vien b) {
    string s1, s2;
    stringstream ssa(a.birth);
    stringstream ssb(b.birth);
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
    if(s1 > s2) {
        return false;
    }
    return a.mnv < b.mnv;
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
    sort(a + 1, a + n + 1, comp);
    for(int i = 1; i <= n; ++i) {
        cout << a[i];
    }
    return 0;
}