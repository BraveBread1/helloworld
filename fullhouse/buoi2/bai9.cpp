#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

int main () {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    double khoangcach = sqrt(pow(a - c, 2) + pow(b - d, 2));
    cout << fixed << setprecision(4) << khoangcach << endl;
    return 0;
}