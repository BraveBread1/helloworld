#include<iostream>
#include<fstream>
#include<cmath>

using namespace std;

struct diem{
    int x, y;
};

struct doan{
    diem start, end;
};

struct gapKhuc{
    int m;
    doan g[100];
};

double doDai(doan a) {
    double l = sqrt(pow(a.end.x - a.start.x, 2) + pow(a.end.y - a.start.y, 2));
    return l;
}

bool operator== (diem a, diem b) {
    if(a.x == b.x && a.y == b.y) {
        return true;
    }
    else {
        return false;
    }
}

bool lienTuc(gapKhuc a) {
    for(int i = 0; i < a.m - 1; ++i) {
        if(!(a.g[i].end == a.g[i + 1].start)) {
            return false;
        }
    }
    return true;
}

bool operator < (const doan &a, const doan &b) {
    double l1 = doDai(a);
    double l2 = doDai(b);
    return l1 < l2;
}

bool operator < (const gapKhuc &a, const gapKhuc &b) {
    double l1 = 0, l2 = 0;
    for(int i = 0; i < a.m; ++i) {
        l1 += doDai(a.g[i]);
    }
    for(int i = 0; i < b.m; ++i) {
        l2 += doDai(b.g[i]);
    }
    return l1 < l2;
}

doan operator + (diem a, diem b) {
    doan tmp;
    if(a.x < b.x) {
        tmp.start = a;
        tmp.end = b;
    }
    else if(a.x > b.x) {
        tmp.start = b;
        tmp.end = a;
    }
    else {
        if(a.y < b.y) {
            tmp.start = a;
            tmp.end = b;
        }
        else {
            tmp.start = b;
            tmp.end = a;
        }
    }
    return tmp;
}

gapKhuc operator + (doan a, diem b) {
    gapKhuc tmp;
    tmp.m = 2;
    tmp.g[0] = a;
    tmp.g[1] = {a.end , b};
    return tmp;
}

void operator - (gapKhuc &a, int n) {
    if(n >= 0) {
        if(n <= a.m - 1) {
            for(int i = n; i < a.m - 1; ++i) {
                a.g[i] = a.g[i + 1];
            }
            --a.m;
        }
    }
    else {
        if(abs(n) <= a.m) {
            n = a.m - abs(n);
            for(int i = n; i < a.m - 1; ++i) {
                a.g[i] = a.g[i + 1];
            }
            --a.m;
        }
    }
}

bool tren(doan a, diem b) {
    if(a.start == b || a.end == b) {
        return true;
    }
    diem u;
    u.x = a.end.x - a.start.x;
    u.y = a.end.y - a.start.y;
    diem v;
    v.x = b.x - a.start.x;
    v.y = b.y - a.start.y;
    if(u.x * v.y != u.y * v.x) {
        return false;
    }
    if(u.x * v.y == u.y * v.x && 1ll * u.x / v.x < 0) return false;
    return pow(v.x, 2) + pow(v.y, 2) < pow(u.x, 2) + pow(u.y, 2);
}

long long cc(diem a, diem b, diem c) {
    a.x -= b.x;
    a.y -= b.y;
    b.x -= c.x;
    b.y -= c.y;
    return 1ll * a.x * b.y - 1ll * a.y * b.x;   
}

bool haiPhia(doan a, doan b) {
    return cc(a.start, a.end, b.end) * cc(a.start, a.end, b.end) < 0;
}

bool giao(doan a, doan b) {
    if(tren(a, b.end) || tren(a, b.start) || tren(b, a.end) || tren(b, a.start)) {
        return true;
    }
    if(haiPhia(a, b) && haiPhia(b, a)) {
        return true;
    }
    else {
        return false;
    }
}

bool tuCat(gapKhuc a) {
    for(int i = 1; i < a.m - 1; ++i) {
        if(giao(a.g[i], a.g[i + 1])) {
            return true;
        }
    }
    return false;
}
int main() {
    ifstream in;
    in.open("input.txt");
    diem a[100];
    doan b[100];
    gapKhuc c[100];
    int x1 = 0, x2 = 0, x3 = 0;
    int n; in >> n;
    for(int i = 1; i <= n; ++i) {
        int q; in >> q;
        if(q == 1) {
            in >> a[x1].x >> a[x1].y;
            ++x1;            
        }
        else if(q == 2) {
            in >> b[x2].start.x >> b[x2].start.y >> b[x2].end.x >> b[x2].end.y;
            ++x2;
        }
        else if(q == 3) {
            in >> c[x3].m;
            for(int j = 0; j < c[x3].m; ++j) {
                in >> c[x3].g[j].start.x >> c[x3].g[j].start.y >> c[x3].g[j].end.x >> c[x3].g[j].end.y;
            }
            ++x3;
        }
    }
    in.close();
}