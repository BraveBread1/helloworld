#include<iostream>
#include<math.h>

using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int ktra = a + b - c;
	if(ktra > 0) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}
