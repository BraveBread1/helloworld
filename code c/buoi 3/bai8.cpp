#include<iostream>
#include<math.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int tong = 0;
    for(int i = 1; i <= 2 * n - 1; i += 2) {
        tong += i;
    }
    cout << tong << endl;
    return 0;
}