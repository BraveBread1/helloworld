#include<iostream>
#include<math.h>

using namespace std;

int main() {
    int a, b, k;
    cin >> a >> b >> k;
    int vitri = 0;
    if(k % 2 == 0) {
        vitri = k / 2 * ( a - b);
    }
    else {
        vitri = (k - 1) / 2 * (a - b) + a;
    }
    cout << vitri << endl;
    return 0;
}