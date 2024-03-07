#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
	int r;
	cin >> r;
	double chuvi = 2 * 3.14 * r;
	double dientich = 3.14 * pow( r, 2);
	cout << setprecision(2) << fixed << chuvi << " " << dientich;
	return 0;
}
