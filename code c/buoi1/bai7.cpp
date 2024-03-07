#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main () {
	int c;
	cin >> c;
	double f = ( 1.0 * c * 9 / 5) + 32;
	cout << setprecision(2) << fixed << f;
	return 0;
}
