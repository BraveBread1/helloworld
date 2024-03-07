#include<iostream>

using namespace std;

struct giaoVien{
    string ma;
    string name;
    int base;
    string job;
    int luong;
};

int main() {
    giaoVien a;
    getline(cin, a.ma);
    getline(cin, a.name);
    cin >> a.base;
    a.job = a.ma.substr(0, 2);
    int phuCap;
    if(a.job == "HT") {
        phuCap = 2e6;
    }
    else if(a.job == "HP") {
        phuCap = 1e6;
    }
    else {
        phuCap = 5e5;
    }
    int heSo = stoi(a.ma.substr(2, 2));
    a.luong = a.base * heSo + phuCap;
    cout << a.ma << " " << a.name << " " << heSo << " " << a.luong;
    return 0;
}