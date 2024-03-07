#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	int thuong = a / b;
	if ( a % b != 0) {
		int boi = b * ( thuong + 1);
		cout << boi;
	}
	else {
		int boi = thuong * b;
		cout << boi;
	}
	return 0;
}
