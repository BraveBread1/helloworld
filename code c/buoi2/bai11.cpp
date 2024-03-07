#include<iostream>
#include<math.h>

using namespace std;

int main () {
    int k, n, w;
    cin >> k >> n >> w;
    int tong = k * (1 + w) * w / 2;
    int vay = tong - n;
    if (vay > 0) {
        cout << vay << endl;
    }
    else {
        cout << "0" << endl;
    }
    return 0;
}