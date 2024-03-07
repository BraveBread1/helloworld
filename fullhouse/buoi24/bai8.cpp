#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

class goods{
    private:
    string ma;
    double nhap, xuat;
    long long gia, tien, thue;
    public:
    void cal();
    friend istream& operator >>(istream& in, goods &a);
    friend ostream& operator << (ostream& out, goods a);
    long long getThue();
    char getNhom();
};

void goods::cal() {
    if(ma[0] == 'A') {
        xuat = 0.6 * nhap;
        xuat = round(xuat);
        if(ma[4] == 'Y') {
            gia = 110000;
            tien = xuat * gia;
            thue = 0.08 * tien;
        }
        else {
            gia = 135000;
            tien = xuat * gia;
            thue = 0.11 * tien;
        }
    }
    else {
        xuat = 0.7 * nhap;
        xuat = round(xuat);
        if(ma[4] == 'Y') {
            gia = 110000;
            tien = xuat * gia;
            thue = 0.17 * tien;
        }
        else {
            gia = 135000;
            tien = xuat * gia;
            thue = 0.22 * tien;
        }
    }   
}

istream& operator >> (istream& in, goods &a) {
    in >> a.ma >> a.nhap;
    return in;
}

long long goods::getThue() {
    return thue;
}

ostream& operator << (ostream& out, goods a) {
    out << a.ma << " " << a.nhap << " " << a.xuat << " " << a.gia << " " << a.tien << " " << a.thue << endl;
    return out;
}

bool comp(goods a, goods b) {
    return a.getThue() > b.getThue();
}

char goods::getNhom() {
    return ma[0];
}

int main() {
    int n; cin >> n;
    goods *a = new goods[n];
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        a[i].cal();
    }
    sort(a, a + n, comp);
    char c; cin >> c;
    for(int i = 0; i < n; ++i) {
        if(a[i].getNhom() == c) {
            cout << a[i];
        }
    }
    delete[] a;
    return 0;
}