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

bool nto (int n) {
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) return false;
    }
    return true;
}

bool smith(int n)
{
    if(nto(n)) {
        return false;
    }
    int tong1 = 0;
    int tong2 = 0;
    for(int i = n; i > 0; i /= 10) tong1 += i % 10;
    for(int i = 2; i <= n; i++) {
        while(n % i == 0) {
            for(int a = i; a > 0; a /= 10) tong2 += a % 10;
            n /= i;
        }
    }
    if(tong1 == tong2) return true;
    else return false;
}

int main()
{
    int a, b; cin >> a >> b;
    for(int i = a; i <= b; ++i)
    {
        if(smith(i) && hoax(i))
        {
            cout << i << " ";
        }
    }
    return 0;
}