#include<iostream>

using namespace std;

int main() {
    double toan, ly, hoa;
    cout << "Nhap diem mon toan:" << endl;
    cin >> toan;
    cout << "Nhap diem mon ly:" << endl;
    cin >> ly;
    cout << "Nhap diem mon hoa:" << endl;
    cin >> hoa;
    double avg = (toan + ly + hoa) / 3;
    if(avg >= 5) cout << "Sinh vien da do";
    else cout << "Sinh vien da truot";
    return 0;
}