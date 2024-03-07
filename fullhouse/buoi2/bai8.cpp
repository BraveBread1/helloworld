#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int n; cin >> n;
    double chuvi = 2 * 3.14 * n;
    double dientich = 3.14 * n * n;
    cout << fixed << setprecision(2) << chuvi << " " << dientich << endl;
    return 0;
}