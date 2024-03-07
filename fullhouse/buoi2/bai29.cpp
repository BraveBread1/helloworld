#include<iostream>

using namespace std;

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    long long min, max;
    if(a > b && a > c && a > d) max = a;
    if(b > a && b > c && b > d) max = b;
    if(c > a && c > b && c > d) max = c;
    if(d > a && d > b && d > c) max = d;
    if(a < b && a < c && a < d) min = a;
    if(b < a && b < c && b < d) min = b;
    if(c < a && c < b && c < d) min = c;
    if(d < a && d < b && d < c) min = d;
    cout << max << " " << min;
    return 0;
}