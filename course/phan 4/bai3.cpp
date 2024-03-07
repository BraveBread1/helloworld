#include<iostream>

using namespace std;

int main() {
    int tong, chan;
    cin >> tong >> chan;
    int ga = 0, cho = 0;
    for(int i = 0; i < tong; ++i) {
        cho = i;
        ga = tong - 1;
        if(cho * 4 + ga * 2 == chan) {
            cout << "chicken = " << ga << ", dog = " << cho;
            return 0;
        }
    }
    cout << "invalid";
    return 0;
}