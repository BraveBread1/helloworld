#include<iostream>

using namespace std;

int main() {
    int n; cin >> n;\
    int dem = 0;
    for(int i = n; i > 0; i /= 10) ++ dem;
    cout << dem;
    return 0;
}