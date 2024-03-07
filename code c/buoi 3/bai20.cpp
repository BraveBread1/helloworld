#include<iostream>
#include<math.h>

using namespace std;

int main() {
    int i;
    cin >> i;
    int mi, ci;
    int m = 0, c = 0;
    while (i > 0) {
        cin >> mi >> ci;
        if (mi > ci) {
            m++;
        }
        else if (mi < ci) {
            c++;
        }
        i--;
    }
    if (m > c) {
        cout << "Mishka" << endl;
    }
    else if (m < c) {
        cout << "Chris" << endl;
    }
    else {
        cout << "Friendship is magic! ^^";
    }
    return 0;
}