#include<iostream>
#include<math.h>
using namespace std;
bool nto (int n) {
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) return false;
    }
    return true;
}
int main() {
    int n; cin >> n;
    for(int i = 2; i <= n / 2; i++) {
        if(nto(i) && nto(n - i)) cout << i << " " << n - i << endl;
    }
    return 0;
}