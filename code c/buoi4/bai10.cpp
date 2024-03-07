#include<iostream>

using namespace std;

int le(int n) {
    int l = 0;
    for(n; n > 0; n /= 10) {
        int du = n % 10;
        if (n % 2 != 0) {
            l++;
        }
    }
    return l;
}

int chan(int n) {
    int c = 0;
    for(n; n > 0; n /= 10) {
        int du = n % 10;
        if (n % 2 == 0) {
            c++;
        }
    }
    return c;
}

int main() {
    int n;
    cin >> n;
    cout << le(n) << " " << chan(n);
    return 0;
}