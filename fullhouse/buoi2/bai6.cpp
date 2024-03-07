#include<iostream>
#include<math.h>

using namespace std;

int main() {
    int n; cin >> n;
    long long a = pow(n, 3) + 3 * pow(n, 2) + n + 1;
    cout << a << endl;
    return 0;
}