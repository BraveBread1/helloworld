#include<iostream>

using namespace std;

int main() {
    int h, m, s;
    cin >> h >> m >> s;
    int giay = 60 * 60 * h + 60 * m + s;
    cout << 86400 - giay;
    return 0;
}