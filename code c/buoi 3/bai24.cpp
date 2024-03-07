#include<iostream>

using namespace std;

int main() {
    int m, n;
    cin >> n >> m;
    long long mgt = 1;
    long long ngt = 1;
    for (int i = m + 1; i > 0; i--) {
        mgt *= i;
    }
    for (int i = n - 1; i > 0; i--) {
        ngt *= i;
    }
    long long hieugt = 1;
    for (int i = m - n + 2; i > 0; i--) {
        hieugt *= i;
    }
    int cach = mgt / (ngt * hieugt);
    cout << cach << endl;
    return 0;
}