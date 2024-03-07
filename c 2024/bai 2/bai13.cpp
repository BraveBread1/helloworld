#include<iostream>

using namespace std;

bool check(int y)
{
    bool a[10];
    for(int i = 0; i <= 10; ++i) a[i] = false;
    while(y > 0)
    {
        int du = y % 10;
        if(a[du]) return false;
        else
        {
            a[du] = true;
        }
        y /= 10;
    }
    return true;
}

int main()
{
    int x; cin >> x;
    int y = x + 1;
    while(1)
    {
        if(check(y))
        {
            cout << y;
            return 0;
        }
        ++y;
    }
}