#include<iostream>
#include<math.h>

using namespace std;

int main() {
    long long m, n, a;
    cin >> m >> n >> a;
    long long tong;
    long long t1 = m / a;
    long long t2 = n / a;
    if(m % a == 0 && n % a == 0) {
        tong = t1 * t2;
        cout << tong << endl;
    }
    else if(m % a  != 0 && n % a == 0) {
        tong = (t1 + 1) * t2;
        cout << tong << endl;
    }
    else if(m % a == 0 && n % a != 0) {
        tong = t1 * (t2 + 1);
        cout << tong << endl;
    }
    else {
        tong = (t1 + 1) * (t2 + 1);
        cout << tong << endl;
    }
    return 0;
}