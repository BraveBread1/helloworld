#include<iostream>

using namespace std;

void tong(int a, int b) {
    int tong = a + b;
    cout << tong << endl;
}

void hieu(int a, int b) {
    int hieu = a - b;
    cout << hieu << endl;
}

void tich (int a, int b) {
    int tich = a * b;
    cout << tich << endl;
}

void thuong (int a, int b) {
    int thuong = a / b;
    cout << thuong << endl;
}

void chiadu (int a , int b) {
    int du = a % b;
    cout << du << endl;
}
int main() {
    int a, b;
    cin >> a >> b;
    tong (a, b);
    hieu(a, b);
    tich(a , b);
    thuong (a , b);
    chiadu (a, b);
    return 0;
}