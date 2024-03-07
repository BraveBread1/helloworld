#include<iostream>
#include<math.h>

using namespace std;

int main () {
    long long n; cin >> n;
    long long dem = 0;
    long long p=1;
    long long b;
	while(n >= pow(5,p)) {
		b=n-n % (long long)pow(5,p);
        dem +=(b)/pow(5,p);
        p+=1;
    }
    cout << dem;
    return 0;
}