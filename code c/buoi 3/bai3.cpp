#include<iostream>
#include<math.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int tong =0;
    for (int i = 3; i <= n; i +=3){
        tong += i;
    }
    cout << tong;
    return 0;
}