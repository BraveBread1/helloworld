#include<iostream>
#include<math.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    int chan = 0;
    int le = 0;
    while (n != 0) {
        int du = n % 10;
        if (du % 2 == 0) {
            chan ++;
        }
        else {
            le ++;
        }
        n /= 10;
    }
    cout << chan << endl;
    cout << le << endl;
    return 0;
}