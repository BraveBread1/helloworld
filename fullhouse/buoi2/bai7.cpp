#include<iostream>

using namespace std;

int main() {
    long long a, b, c;
    cin >> a >> b >> c;
    long long tong = a * (b + c) + b * (a + c);
    cout << tong;
    return 0;
}