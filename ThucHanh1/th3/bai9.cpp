#include<iostream>

using namespace std;

int main() {
    int thang, nam;
    cin >> thang >> nam;
    if(thang == 2) {
        if(nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0)) cout << "29";
        else cout << "28";
    }
    else if(thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12) cout << "31";
    else cout << "30";
    return 0;
}