#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

class dien{
    private:
    string ma, loai;
    long long cu, moi, heSo, tien, tong, phu;
    static int cnt;
    public:
    dien();
    friend istream& operator >> (istream& in, dien &a);
    friend ostream& operator << (ostream& out, dien a);
    void cal();
    long long get_tong();
};

long long dien::get_tong() {
    return tong;
}

int dien::cnt = 0;

dien::dien() {
    ++cnt;
    ma = "KH" + string(2 - to_string(cnt).size(), '0') + to_string(cnt);
}

istream& operator >> (istream& in, dien &a) {
    in >> a.loai >> a.cu >> a.moi;
    return in;
}

ostream& operator << (ostream& out, dien a) {
    out << a.ma << " " << a.heSo << " " << a.tien << " " << a.phu << " " << a.tong << endl;
    return out;
}

void dien::cal() {
    if(loai == "KD") heSo = 3;
    else if(loai == "NN") heSo = 5;
    else if(loai == "TT") heSo = 4;
    else heSo = 2;
    long long hieu = moi - cu;
    tien = hieu * heSo * 550;
    if(hieu < 50) phu = 0;
    else if(hieu >= 50 && hieu <= 100) {
        double tmp;
        tmp = tien * 0.35;
        phu = round(tmp);
    }
    else {
        phu = tien;
    }
    tong = phu + tien;
}

bool comp(dien a, dien b) {
    return a.get_tong() > b.get_tong();
}

int main() {
    int n; cin >> n;
    dien* a = new dien[n];
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        a[i].cal();
    }
    sort(a, a + n, comp);
    for(int i = 0; i < n; ++i) {
        cout << a[i];
    }
    delete[] a;
    return 0;
}