#include<iostream>

using namespace std;

int fac(int n)
{
    switch(n)
    {
        case 1:
        return 1;
        case 2:
        return 2;
        case 3:
        return 6;
        case 4:
        return 24;
        case 5:
        return 120;
        case 6:
        return 720;
        case 7:
        return 5040;
        case 8:
        return 40320;
        case 9:
        return 362880;
        default:
        return 1;
    }
}

int main()
{
    int n; cin >> n;
    int sum = 0;
    for(int i = n; i > 0; i /= 10)
    {
        sum += fac(i % 10);
    }
    if(sum == n) cout << "YES";
    else cout << "NO";
    return 0;
}