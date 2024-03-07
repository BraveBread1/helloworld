#include<iostream>
#include<math.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int tong = 0;
    for(int i = 1; i <= n; i++) {
        tong += pow(-1,i) * i;
    }
    cout << tong << endl;
    return 0;
}