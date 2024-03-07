#include<iostream>

using namespace std;

int main()
{
    int x, y; cin >> x >> y;
    while(y > 0)
    {
        int tmp = x % y;
        x = y;
        y = tmp;
    }
    cout << x;
}