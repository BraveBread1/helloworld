#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main() {
    int a; cin >> a;
    cout << fixed << setprecision(3) << sqrt(a) << " " << cbrt(a);
    return 0;
}