#include<iostream>

using namespace std;

int main() {
    int t; cin >> t;
    for(t; t > 0; --t) {
        int x1, y1, x2, y2, x3, y3, x4, y4;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
        int n;
        if(x1 == x2) {
            n = y2 - y1;
        }
        else if(x1 == x3) {
            n = y3 - y1;
        }
        else if(x1 == x4) {
            n = y4 - y1;
        }
        cout << n*n << endl;
    }
    return 0;
}