#include<iostream>
#include<math.h>

using namespace std;

int main () {
	double a, b, c;
	cin >> a >> b >> c;
	if( ( a / b == c) || ( b / c == a) || ( c / a == b)){
		cout << "/";
	}
	else {
		cout << "NOSOL";
	}
	return 0;
}
