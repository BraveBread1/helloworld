#include<iostream>
#include<math.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
    if (i == 1) {
        cout << "0" << endl;
    }
    else if (i == 2) {
        cout << "6" << endl;
    }
    else if (i == 3) {
        cout << "28" << endl;
    }
    else if (i == 4) {
        cout << "96" << endl;
    }
    else if (i >= 5) {
        int cach = i * i * (i * i - 1) / 2;
        cach = cach - (48 + 40 * (i - 4) + 8 * pow(i - 4, 2)) / 2;
        cout << cach << endl;
    }
    }
    return 0;
}