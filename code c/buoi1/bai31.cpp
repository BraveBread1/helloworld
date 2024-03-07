#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

int main() {
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    double tb = (a + b + 2 * c + 3 * d) / 7;
    if(tb >= 8) {
        cout << "GIOI";
    }
    else if(tb < 8 && tb >= 6.5){
        cout << "KHA";
    }
    else if(tb >= 5 && tb < 6.5){
        cout << "TRUNG BINH";
    }
    else {
        cout << "YEU";
    }
    return 0;
}