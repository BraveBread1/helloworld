#include<iostream>

using namespace std;

int ucln(int a, int b) {
    if(b == 0) return a;
    int c = a % b;
    return ucln(b, c);
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << ucln(a, b);
    return 0;
}