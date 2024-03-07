#include<iostream>
#include<math.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 0;
    if (n % 2 == 0) {
        i = n / 2;
        cout << i << endl;
        while (i != 0) {
            cout << "2" << " ";
            i --;
        }
    }
    else {
        i = (n - 1) / 2;
        cout << i << endl;
        while (i != 1) {
            i--;
            cout << "2 ";
        }
        cout << "3" << endl;
    }
    return 0;
}