#include<iostream>
#include<math.h>

using namespace std;

int main () {
    int n;
    cin >> n;
    int i;
    i += n / 100;
    n = n % 100;
    i += n / 20;
    n = n % 20;
    i += n / 5;
    n = n % 5;
    i += n;
    cout << i << endl;
    return 0;
}