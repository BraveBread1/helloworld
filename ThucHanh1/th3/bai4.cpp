#include<iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int max, min;
    if(a > b && a > c) max = a;
    else if(b > a && b > c) max = b;
    else max = c;
    if(a < b && a < c) min = a;
    else if(b < a && b < c) min = b;
    else min = c;
    int tongMin = a + b + c - max;
    int tongMax = a + b + c - min;
    cout << "Tong 2 so lon nhat la: " << tongMax << endl;
    cout << "Tong 2 so nho nhat la: " << tongMin << endl;
    return 0;
}