#include<iostream>
#include<math.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 0;
    int hai = 0;
    int ba = 0;
    while (n > 3) {
        n -= 2;
        i++;
        hai ++;
        if ( n == 3) {
            i++;
             ba ++;
        }
        else if ( n == 2) {
            i++;
            hai ++;
        }
    }
    cout << i << endl;
    while (hai != 0) {
        cout << "2" << " ";
        hai --;
    }
    if ( ba != 0) {
        cout << "3" << endl;
    }
    return 0;
}