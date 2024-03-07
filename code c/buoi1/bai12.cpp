#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	if ( n % 2 == 0) {
		int tong = n / 2;
		cout << tong;
	}
	else {
		int tong = (-n - 1) /2;
		cout << tong;
	}
	return 0;
}
