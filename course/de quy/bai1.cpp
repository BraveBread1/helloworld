#include<iostream>

using namespace std;

int sum(int n) {
    if(n == 0) return 1;
    return 2 * n + 1 + sum(n - 1); 
}

int main() {
    int n; cin >> n;
    cout << sum(n) << endl;
    return 0;
}