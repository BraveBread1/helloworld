#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main() {
	double a, b, c;
	cin >> a >> b >> c;
	double d = pow(b,2) - 4 * a * c;
	if( a == 0 && b == 0 && c == 0) {
		cout << "INF";
	}
	else if (a == 0) {
		double x = (-c) / b;
		cout << x;
	}
	else if(d < 0) {
		cout << "NO";
	}
	else if(d == 0) {
		double x = (-b) / ( 2 * a);
		cout << x;
	}
	else {
		double x1 = ( ((-b) + sqrt(d)) / ( 2 * a) );
		double x2 = ( (-b) - sqrt(d)) / ( 2 * a);
		cout << setprecision(2) << fixed << x1 << " " << x2 << endl;
	}
	return 0;
}
