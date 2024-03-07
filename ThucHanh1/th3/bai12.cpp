#include<iostream>

using namespace std;

double salary(double h, double con) {
    double luong;
    if(h > 37.5) {
        luong = (h - 37.5) * 1.5 * 16.78 + 629.25;
    }
    else {
        luong = h * 16.78;
    }
    luong = luong * 0.83 - 10;
    if(con >= 3) luong -= 35;
    return luong;
}

int main() {
    double h, con;
    cin >> h >> con;
    cout << salary(h, con);
    return 0;
}