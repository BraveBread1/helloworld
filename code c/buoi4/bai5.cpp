#include<iostream>
#include<math.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int b = 0;
    int b1 = 1;
    int b2 = 1;
    for(n; n > 0; n--) {
        cout << b << " ";
        b = b1;
        b1 = b2;
        b2 = b + b1;
    }
    return 0;
}