#include<iostream>
#include<math.h>

using namespace std;

int main() {
    int m, n, a;
    cin >> m >> n >> a;
    int tong;
    int t1 = m / a;
    int t2 = n / a;
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