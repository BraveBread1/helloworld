#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

int main() {
	long long n;
	cin >> n;
	long long tong = ( long long)n * ( n + 1) * ( 2 * n +1) / 6;
	cout << tong;
	return 0;
}
