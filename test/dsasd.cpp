#include<iostream>

using namespace std;

int main()
{
    int k = 0;
    for(int i = 0; i <= 9; ++i)
    {
        for(int i = 0; i <= 8; ++i)
        {
            ++k;
        }
    }
    cout << k;
    return 0;
}