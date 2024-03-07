#include<iostream>
#include<math.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    int i = 0;
    while (n != 0) {
        int du = n % 10;
        if (du == 1 || du == 4 || du == 6 || du == 8 || du == 9) {
        }
        else {
            i++;
        }
        n /= 10;
    }
    cout << i << endl;
    return 0;
}