#include<iostream>
#include<math.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	int nam = n / 365;
	if ( nam == 0){
		int tuan = n / 7;
		int ngay = n - tuan * 7;
		cout << nam << " " << tuan << " " << ngay;
	}
	else {
		int tuan = ( n - nam * 365) / 7;
		int ngay = n - nam * 365 - tuan * 7;
		cout << nam << " " << tuan << " " << ngay << endl;
	}
	return 0;
}
