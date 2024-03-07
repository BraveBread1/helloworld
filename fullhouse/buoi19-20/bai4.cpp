#include<iostream>
#include<iomanip>
#include<sstream>

using namespace std;

struct sinhVien{
    string msv, name, region;
    double t, l, h;
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
    sinhVien a;
    getline(cin, a.msv);
    getline(cin, a.name);
    cin >> a.t >> a.l >> a.h;
    chuanHoa(a.name);
    a.region = a.msv.substr(0, 3);
    double ut;
    int kv;
    if(a.region == "KV1") {
        ut = 0.5;
        kv = 1;
    }
    else if(a.region == "KV2") {
        ut = 1.0;
        kv = 2;
    }
    else if(a.region == "KV3"){
        ut = 2.0;
        kv = 3;
    }
    else {
        ut = 0;
        kv = 0;
    }
    double tong = a.t + a.l + a.h + ut;
    bool cs = false;
    if(tong >=26) cs = true;
    cout << a.msv << " " << a.name << kv << " ";
    int tmp = tong;
    if(tmp == tong) {
        cout << tmp << " ";
    }
    else {
        cout << fixed << setprecision(1) << tong << " ";
    }
    if(cs) {
        cout << "TRUNG TUYEN"; 
    }
    else {
        cout << "TRUOT";
    }
    return 0;
}