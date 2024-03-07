#include<iostream>

using namespace std;

int main() {
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    const int rup25 = 0;
    const int rup50 = 1;
    int r[2] = {0, 0};
    for(int i = 0; i < n; ++i) {
        if(a[i] == 25) ++r[rup25];
        else if(a[i] == 50) {
            if(r[rup25] < 1) {
                cout << "NO";
                return 0;
            }
            else {
                ++r[rup50];
                --r[rup25];
            }
        }
        else {
            int tienThoi = 0;
            if(r[rup50] > 0) {
                --r[rup50];
                tienThoi+=50;
            }
            while(tienThoi < 75 && r[rup25]) {
                --r[rup25];
                tienThoi +=25;
            }
            if(tienThoi < 75) {
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
    return 0;
}