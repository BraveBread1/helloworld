#include<iostream>
#include<iomanip>
#include<sstream>

using namespace std;

struct sinhVien{
    string name;
    string birth;
    double sc1, sc2, sc3;
    double sum;
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

int main() {
    sinhVien a;
    getline(cin, a.name);
    cin >> a.birth;
    cin >> a.sc1 >> a.sc2 >> a.sc3;
    a.sum = a.sc1 + a.sc2 + a.sc3;
    chuan(a.birth);
    cout << a.name << " " << a.birth << " " << fixed << setprecision(1) << a.sum;
    return 0;
}