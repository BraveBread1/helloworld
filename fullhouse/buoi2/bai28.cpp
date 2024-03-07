#include<iostream>

using namespace std;

int main() {
    int a1, a2, a3, b1, b2, b3;
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
    int n; cin >> n;
    int cup = a1 + a2 + a3;
    int hc = b1 + b2 + b3;
    int dem = 0;
    if(cup % 5 == 0) dem += cup / 5;
    else dem += cup / 5 + 1;
    if(hc % 10 == 0) dem += hc / 10;
    else dem += hc / 10 + 1;
    if(n >= dem) cout << "YES";
    else cout << "NO";
    return 0;
}