#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

int main () {
	char c;
	cin >> c;
	if( ( c >= 65) && ( c <= 90)) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}
