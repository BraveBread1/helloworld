#include<iostream>

using namespace std;

int main() {
    double a1, b1, c1, a2, b2, c2;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    double a = a1 / a2;
    double b = b1 / b2;
    double c = c1 / c2;
    if(a == b && a == c) cout << "he phuong trinh co vo so nghiem";
    else if(a == b && a != c) cout << "he phuong trinh vo nghiem";
    else {
        double x = (b2 * c1 - b1 * c2) / (a1 * b2 -  a2 * b1);
        double y = (c1 - a1 * x) / b1;
        cout << "nghiem cua he phuong trinh la (x, y) = ("<< x << "," << y << ")"; 
    }
    return 0;
}