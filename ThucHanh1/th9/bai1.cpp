#include<iostream>
#include<cmath>

using namespace std;

struct ToaDo{
    double x, y;
};

void nhapToaDo(ToaDo& td) {
    cin >> td.x >> td.y;
}

void inToaDo(const ToaDo& td) {
    cout << "(" << td.x << "," << td.y << ")" << endl;
}

bool laGocToaDo(const ToaDo& td) {
    if(td.x == 0 && td.y == 0) return true;
    else return false;
}

bool laTrenTungHoanh(const ToaDo& td) {
    if(td.x == 0 || td.y == 0) return true;
    else return false;
}

bool laTrenDuongcheo(const ToaDo& td) {
    if(td.x == td.y || td.x == -td.y) return true;
    else return false;
}

bool laDoiXung(const ToaDo& td1, const ToaDo& td2) {
    if(td1.x + td2.x == 0 && td1.y + td2.y == 0) return true;
    else return false;
}

int trenGocPhanTu(const ToaDo& td) {
    if(td.x > 0 && td.y > 0) return 1;
    else if(td.x < 0 && td.y > 0) return 2;
    else if(td.x < 0 && td.y < 0) return 3;
    else if(td.x > 0 && td.y < 0) return 4;
    else return 0;
}

double tinhKhoangCach(const ToaDo & td1, const ToaDo& td2) {
    return sqrt(pow(td1.x - td2.x, 2) + pow(td1.y - td2.y, 2));
}

int main() {
    int n; cin >> n;
    ToaDo a[n];
    for(int i = 0; i < n; ++i) {
        nhapToaDo(a[i]);
    }
    int dem1 = 0;
    for(int i = 0; i < n; ++i) {
        if(laGocToaDo(a[i]) || laTrenTungHoanh(a[i]) || laTrenDuongcheo(a[i]) || trenGocPhanTu(a[i])) {
            ++dem1;
        }
    }
    cout << dem1 << endl;
    int dem2 = 0;
    for(int i = 0; i < n; ++i) {
        for(int j = i + 1; j < n; ++j) {
            
        }
    }
}