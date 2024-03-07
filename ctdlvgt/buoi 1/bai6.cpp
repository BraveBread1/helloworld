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
    int cnt = 0;
    while(b >= pow(n, 2)) {
        ++cnt;
        n ++;
    }
    cout << cnt;
    return 0;
}