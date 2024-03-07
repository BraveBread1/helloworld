#include<iostream>

using namespace std;

long long int factorial(int n)
{
    long long result = 1;
    for(int i = 2; i <= n; ++i)
    {
        result *= i;
    }
    return result;
}

int main()
{

}