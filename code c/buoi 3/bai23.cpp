#include<iostream>
#include<math.h>

using namespace std;

int main () {
    int n, m;
    cin >> n >> m;
    long long ngt = 1;
    for(int i = n - 1; i > 0; i --) {
        ngt *= i;
    }
    long long mgt = 1;
    for(int i = m - 1; i > 0; i --) {
        mgt *= i;
    }
    long long hieugt = 1;
    for(int i = n - 1 - m +1; i > 0; i --) {
        hieugt *= i;
    }
    int cach = ngt / (mgt * hieugt);
    cout << cach << endl;
    return 0;
}