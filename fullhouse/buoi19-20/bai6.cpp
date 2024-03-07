#include<iostream>

using namespace std;

int cs(int n) {
    int cnt = 0;
    while(n != 0) {
        ++cnt;
        n /= 10;
    }
    return cnt;
}

struct goods{
    string ma, name, donVi;
    int buy, sell;
    int loiNhuan;
};

void swap(goods &a, goods &b) {
    goods tmp = a;
    a = b;
    b = tmp;
}

void selectionSort(goods a[], int t) {
    for(int i = 0; i < t - 1; ++i) {
        int max = i;
        for(int j = i + 1; j < t; ++j) {
            if(a[j].loiNhuan > a[max].loiNhuan) {
                max = j;
            }
            else if(a[j].loiNhuan == a[max].loiNhuan && a[j].ma > a[j].ma) {
                max = j;
            }
        }
        swap(a[i], a[max]);
    }
}

int main() {
    int t; cin >> t;
    cin.ignore();
    goods a[t];
    for(int i = 0; i < t; ++i) {
        getline(cin, a[i].name);
        getline(cin, a[i].donVi);
        cin >> a[i].buy >> a[i].sell;
        cin.ignore();
        a[i].ma += "MH";
        int stt = cs(i + 1);
        for(int x = 1; x <= 4 - stt; ++x) {
            a[i].ma += '0';
        }
        a[i].ma += to_string(i + 1);
        a[i].loiNhuan = a[i].sell - a[i].buy;
    }
    selectionSort(a, t);
    for(int i = 0; i < t; ++i) {
        cout << a[i].ma << " " << a[i].name << " " << a[i].donVi << " " << a[i].buy << " " << a[i].sell << " " << a[i].loiNhuan << endl;
    }
    return 0;
}