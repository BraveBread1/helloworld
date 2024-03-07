#include<iostream>
#include<math.h>

using namespace std;

int scs(int n) {
    int cs = 0;
    for(n; n > 0; n /= 10) {
        cs++;
    }
    return cs;
}

int main() {
    int n; cin >> n;
    int cs = scs(n);
    int c = n % 10;
    int d = n / pow(10, cs - 1);
    cout << d << " " << c;
    return 0;
}