#include<iostream>
#include<math.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    int i = 0;
    while( n != 0) {
        i += n % 10;
        n /= 10;
    }
    cout << i << endl;
    return 0;
}