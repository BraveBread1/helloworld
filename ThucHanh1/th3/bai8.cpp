#include<iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if(a + b - c <= 0 || a + c <= b || b + c <= a) {
        cout << "khong thoa man";
        return 0;
    }
    else {
        int chuVi = a + b + c;
        cout << "Chu vi cua tam giac la: " << chuVi << endl;
        if(a == b && a == c) cout << "Tam giac tren la tam giac deu";
        else if(a == b || a == c || b == c) {
            if(a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) cout << "Tam giac tren la tam giac vuong can";
            else cout << "Tam giac tren la tam giac can";
        }
        else if(a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) cout << "Tam giac tren la tam giac vuong";
        else cout << "Tam giac tren la tam giac thuong";
    }
    return 0;
}