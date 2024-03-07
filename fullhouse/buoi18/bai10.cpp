#include<iostream>
#include<sstream>
#include<algorithm>

using namespace std;

struct cus{
    string uname, pass, name, in, out, tg;
    int time;
    friend istream& operator >> (istream& in, cus &a) {
        in >> a.uname >> a.pass;
        in.ignore();
        getline(in, a.name);
        in >> a.in >> a.out;
        return in;
    }
    friend ostream& operator << (ostream &out, cus &a) {
        out << a.uname << " " << a.pass << " " << a.name << " " << a.tg << endl;
        return out;
    }
};

void cal(cus &a) {
    stringstream i (a.in);
    stringstream o (a.out);
    string tmp;
    int hi, mi, ho, mo;
    int cnt = 1;
    while(getline(i, tmp, ':')){
        if(cnt == 1) {
            hi = stoi(tmp);
            ++cnt;
        }
        else if(cnt == 2){
            mi = stoi(tmp);
            cnt = 1;
        }
    }
    while(getline(o, tmp, ':')) {
        if(cnt == 1) {
            ho = stoi(tmp);
            ++cnt;
        }
        else if(cnt == 2) {
            mo = stoi(tmp);
        }
    }
    a.time = ho * 60 + mo - hi * 60 - mi;
    a.tg = to_string(a.time / 60) + " gio " + to_string(a.time % 60) + " phut";
}

bool comp(cus a, cus b) {
    if(a.time > b.time) {
        return true;
    }
    else if(a.time < b.time) {
        return false;
    }
    else {
        return a.uname < b.uname;
    }
}

int main() {
    int n; cin >> n;
    cus *a = new cus[n];
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        cal(a[i]);
    }
    sort(a, a + n, comp);
    for(int i = 0; i < n; ++i) {
        cout << a[i];
    }
    return 0;
}