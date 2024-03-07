#include<iostream>
#include<cmath>

using namespace std;

bool happy(int n)
{
    int result = n;
    int sum = 0;
    do
    {
        while(result > 0)
        {
            sum += pow(result % 10, 2);
            result /= 10;
        }
        result = sum;
        sum = 0;
    }
    while(result != 1 && result != 4);
    if(result == 1) return true;
    else return false;
}

int main()
{
    int n; cin >> n;
    int i = 1;
    while(n > 0)
    {
        if(happy(i))
        {
            --n;
            ++i;
        }
        else ++i;
    }
    --i;
    int result = i;
    int sum = 0;
    int cnt = 1;
    do
    {
        while(result > 0)
        {
            sum += pow(result % 10, 2);
            result /= 10;
        }
        result = sum;
        sum = 0;
        ++cnt;
    }
    while(result != 1);
    cout << cnt;
    return 0;
}