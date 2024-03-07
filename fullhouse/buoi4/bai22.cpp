#include<iostream>
#include<math.h>

using namespace std;

int main() {
    long long n; cin >> n;
    long long a = sqrt(n);
    if(pow(a,2) == n) cout << "YES";
    else cout << "NO";
    return 0;
}