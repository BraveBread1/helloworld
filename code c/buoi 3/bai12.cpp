#include<iostream>
#include<math.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    int i = 0;
    while(n != 0) {
        n = n / 10;
        ++i;
    }
    cout << i << endl;
    return 0;
}