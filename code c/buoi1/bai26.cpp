#include<iostream>
#include<math.h>

using namespace std;

 int main() {
 	int a, b, c;
 	cin >> a >> b >> c;
 	
 	if ((a < 1)	 || (b < 1) || (c < 1) || (a + b - c < 0)) {
 		cout << "INVALID";
	 }
	 else if((a == b) && (b == c)) {
	 	cout << "1";
	 }
	 else if((a == b) || (a == c) || (b == c)){
	 	cout << "2";
	 }
	 else if (pow(a,2) == pow(b,2) + pow(c,2) || pow(b,2) == pow(a,2) + pow(c,2) || pow(c,2) == pow(b,2) + pow(a,2)) {
	 	cout << "3";
	 }
	 else {
	 	cout << "4";
	 }
 	return 0;
}