#include<iostream>
#include<fstream>

using namespace std;

struct sinhvien{
    string ten;
    int sucmanh;
    int thoigian;
};

sinhvien operator+(const sinhvien &a, const sinhvien &b){
    sinhvien tmp;
    tmp.ten = a.ten + "+" + b.ten;
    tmp.sucmanh = a.sucmanh + b.sucmanh;
    tmp.thoigian = a.thoigian + b.thoigian;
    return tmp;
}

bool operator<(const sinhvien &a, const sinhvien &b) {
    int tich1 = a.sucmanh * a.thoigian;
    int tich2 = b.sucmanh * b.thoigian;
    if(tich1 > tich2) return 0;
    else if (tich1 < tich2) return 1;
    else if (a.thoigian > b.thoigian) return 0;
    else return 1;
}

sinhvien operator+(const sinhvien &a, int b) {
    sinhvien tmp;
    tmp.ten = a.ten;
    tmp.sucmanh = a.sucmanh + b;
    tmp.thoigian = a.thoigian;
    return tmp;
}

sinhvien operator+(const sinhvien &a, double b) {
    sinhvien tmp;
    tmp.ten = a.ten;
    tmp.sucmanh = a.sucmanh + b;
    tmp.thoigian = a.thoigian;
    return tmp;
}

void swap(sinhvien *a, sinhvien *b) {
    sinhvien tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    ifstream in;
    ofstream out;
    in.open("students.txt");
    int n;
    in >> n;
    sinhvien arr[n];
    for(int i = 0; i < n; ++i){
        in >> arr[i].ten;
        in >> arr[i].sucmanh;
        in >> arr[i].thoigian;
    }
    out.open("students.txt");
    for(int i = 0; i < n - 1; ++i) {
        int min_index = i;
        for(int j = i + 1; j < n; ++j){
            if(arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        swap(arr[i], arr[min_index]);
    }
    for(int i = 0; i < n; ++i) {
        out << arr[i].ten << " ";
        out << arr[i].sucmanh << " ";
        out << arr[i].thoigian << endl;
    }
    in.close();
    out.close();
    return 0;
}