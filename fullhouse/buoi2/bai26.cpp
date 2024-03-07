#include<iostream>

using namespace std;

int main () {
    long long n;
    cin >> n;
    int i = 0;
    i += n / 100;
    n = n % 100;
    i += n / 20;
    n = n % 20;
    i += n / 10;
    n = n % 10;
    i += n / 5;
    n = n % 5;
    i += n;
    cout << i << endl;
    return 0;
}