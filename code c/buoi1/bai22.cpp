#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

int main() {
	char c;
	cin >> c;
	if( ( c >= 65) && ( c <= 90)) {
		c = c + 32;
		cout << c;
	}
	else{
		cout << c;
	}
	return 0;
}
