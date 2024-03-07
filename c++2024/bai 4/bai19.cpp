#include<iostream>

using namespace std;

int digitSum(int n)
{
    int sum = 0;
    while(n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

bool hoax(int n)
{
    int sum1 = digitSum(n);
    int sum2 = 0;
    for(int i = 2; i <= n; ++i)
    {
        if(n % i == 0)
        {
            sum2 += digitSum(i);
            while(n % i == 0) n /= i;
        }
    }
    return sum1 == sum2;
}

int main()
{
    int n; cin >> n;
    if(hoax(n))
    {
        cout << "YES";
    }
    else cout << "NO";
    return 0;
}