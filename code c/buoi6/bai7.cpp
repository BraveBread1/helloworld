#include<iostream>

using namespace std;

int main() {
    int h, c;
    cin >> h >> c;
    for(int i = 1; i <= h; i++) {
        if(i % 2 == 1) {
            for(int a = 1; a <= c; a++) cout << "1";
            cout << endl; 
        }
        else {
            for(int a = 1; a <= c; a++) cout << "0";
            cout << endl;
        }
    }
    return 0;
}