#include<iostream>

using namespace std;

long long tich(int n) {
    if(n == 0) return 1;
    return (2 * n + 1) * tich(n - 1);
}

int main() {
    int n; cin >> n;
    cout << tich(n) << endl;
    return 0;
}