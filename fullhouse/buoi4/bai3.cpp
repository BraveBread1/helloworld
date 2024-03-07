#include<iostream>
#include<math.h>

using namespace std;

int a, b;

void input(){
 cin >> a >> b;
}

bool nto (int n) {
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) return false;
    }
    return n > 1;
}

bool csnt(int n) {
    int tong = 0;
    while(n > 0) {
        int du = n % 10;
        if(du != 2 && du != 3 && du != 5 && du != 7) return false;
        tong = tong + du;
        n = n / 10;
    }
    return nto(tong);
}

int main() {
    input();
    int dem = 0;
    for(int i = a; i <= b; i++) {
        if(csnt(i) && nto(i)) dem++;
    }
    cout << dem;
    return 0;
}