#include<iostream>
#include<math.h>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int tong;
    if(m % 2 == 0 || n % 2 == 0){
        tong = n * m / 2;
        cout << tong << endl;
    }
    else {
        tong = (n * m - 1) / 2;
        cout << tong << endl;
    }
    return 0;
}