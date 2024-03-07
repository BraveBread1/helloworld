#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    double a, b;
    cin >> a >> b;
    double sum = a + b;
    cout << (int)sum << endl;
    cout << fixed << setprecision(2) << sum;
    return 0;
}