#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int a, b;
    cout << "Nhap vao gia tri chieu dai va chieu rong: " << endl;
    cin >> a >> b;
    int chu_vi = 2 * ( a + b);
    cout << "Chu vi cua hinh chu nhat tren la: " << chu_vi << endl;
    int dien_tich = a * b;
    cout << "Dien tich cua hinh chu nhat tren la: " << dien_tich << endl;
    return 0;
}