#include<iostream>
using namespace std;

int main() {
    int Nam_hien_tai;
    cout << "Nhap vao nam hien tai roi ENTER" << endl;
    cin >> Nam_hien_tai;
    int tuoi;
    cout << "Nhap vao tuoi hien tai roi ENTER" << endl;
    cin >> tuoi;
    int Nam_khac;
    cout << "Nhap vao nam muon biet tuoi cua minh." << endl;
    cin >> Nam_khac;
    int n = Nam_khac - ( Nam_hien_tai - tuoi);
    cout << "Nam " << Nam_khac << " 2023ban " << n << " tuoi.";
    return 0;
}