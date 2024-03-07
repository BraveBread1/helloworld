#include<iostream>
#include<math.h>

using namespace std;

int main () {
    int n;
    cin >> n;
    int tuan = n / 7;
    int du = n % 7;
    int min, max;
    if (du == 1) {
        max = tuan * 2 + 1;
        min = tuan * 2;
    }
    else if (du == 6) {
        max = tuan * 2 + 2;
        min = tuan * 2 + 1;
    }
    else if (du == 0) {
        max = min = tuan * 2;
    }
    else {
        max = tuan * 2 + 2;
        min = tuan * 2;
    }
    cout << max << " " << min << endl;
    return 0;
}