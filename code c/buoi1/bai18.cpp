#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

int main() {
	char c;
	cin >> c;
	if ( ( c >= 97) && ( c <= 122)) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}
