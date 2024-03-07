#include<iostream>
#include<iomanip>

using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;
    long long tong = a + b;
    int hieu = a - b;
    long long tich = a * b;
    double thuong = 1.0 * a / b;
    cout << tong << endl;
    cout << hieu << endl;
    cout << tich << endl;
    cout << fixed << setprecision(2) << thuong << endl;
    return 0;
}