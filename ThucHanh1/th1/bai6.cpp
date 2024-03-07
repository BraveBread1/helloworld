#include <iostream>
#include<math.h>

using namespace std;

int main() {
    int r;
    cout << "Nhap vao ban kinh hinh tron:" << endl;
    cin >> r;
    double chu_vi, dien_tich;
    chu_vi = 2 * 3.14 * r;
    dien_tich = 3.14 * pow(r,2);
    cout << "Chu vi va dien tich cua hinh tron tren lan luot la: " << chu_vi << " va " << dien_tich << endl;
    return 0;
}