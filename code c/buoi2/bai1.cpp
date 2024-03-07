#include<iostream>
#include<math.h>

using namespace std;

int main() {
    int ab , bc , ca;
    cin >> ab >> bc >> ca;
    double achiac = 1.0 * ab / bc;
    double a, b, c;
    c = sqrt(ca / achiac);
    a = ca / c;
    b = ab / a;
    double tong = 4 * ( a + b + c);
    cout << tong;
    return 0;
}