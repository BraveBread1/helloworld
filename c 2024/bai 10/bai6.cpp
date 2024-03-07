#include<iostream>

using namespace std;

int cnt(int a)
{
    int count = 0;
    while(a > 0)
    {
        if(a & 1) ++count;
        a >>= 1;
    }
    return count;
}

int main()
{
    int a; cin >> a;
    cout << cnt(a);
    return 0;
}