#include<iostream>
#include<math.h>

using namespace std;

int main() {
	double a, b;
	cin >> a >> b;
	int a1 = a;
	int b1 = b;
	if (a > a1) {
		int so = b1 - a1;
		cout << so;
	}
	else {
		int so = b1 - a1 + 1;
		cout << so;
	}
	return 0;
}
