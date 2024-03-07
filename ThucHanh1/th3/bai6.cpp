#include<iostream>
#include<cmath>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int delta = b * b - 4 * a * c;
    if(delta < 0) cout << "phuong trinh vo nghiem";
    else if(delta == 0) {
        int x = - b / (2 * a);
        cout << "phuong trinh co nghiem duy nhat la: " << x;
    }
    else {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "phuong trinh co hai nghiem la: " << x1 << " va " << x2;
    }
    return 0;
}