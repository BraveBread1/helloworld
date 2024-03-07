#include<iostream>
#include<math.h>

using namespace std;

bool chinhphuong(long long n) {
    long long a = sqrt(n);
    if(pow(a,2) == n) return true;
    else return false;
}
int main() {
    long long a, b;
    cin >> a >> b;
    int n;
    if(chinhphuong(a)) n = sqrt(a);
    else n = sqrt(a) + 1;
    while(b >= pow(n, 2)) {
        long long so = pow(n, 2);
        cout << so << " ";
        n ++;
    }
    return 0;
}