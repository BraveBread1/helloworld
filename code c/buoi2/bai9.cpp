#include<iostream>
#include<math.h>

using namespace std;

int main () {
    int n, m;
    cin >> n >> m;
    int buoc;
    if(n < m) {
        cout << "-1";
        return 0;
    }
    buoc = (n + 1) / 2;
    int du = buoc % m;
    if ( du == 0) {
        cout << buoc << endl; 
    }
    else {
        cout << buoc - du + m;
    }
    return 0;
}