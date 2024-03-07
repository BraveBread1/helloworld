#include<iostream>

using namespace std;

int main() {
    int h, c;
    cin >> h >> c;
    while(h > 0) {
        for(int i = c; i > 0; i--) {
            cout << "1";
        }
        cout << endl;
        h--;
    }
    return 0;
}