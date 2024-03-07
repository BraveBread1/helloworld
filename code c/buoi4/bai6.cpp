#include<iostream>

using namespace std;

int main() {
    long long n;
    cin >> n;
    long long a = n;
    for(int i = 2; i <= a / 2; i++) {
        while(n % i == 0 ) {
                n /= i;
                cout << i << " ";
        }
    }
    return 0;
}