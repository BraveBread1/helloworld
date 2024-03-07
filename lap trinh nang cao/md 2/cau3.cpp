#include<iostream>

using namespace std;

void printArrow(int n, bool left)
{
    if(!left)
    {
        for(int i = n; i > 0; --i)
        {
            for(int j = 1; j <= n - i; ++j)
            {
                cout << "  ";
            }
            for(int j = 0; j < i; ++j)
            {
                cout << "*";
            }
            cout << endl;
        }
        for(int i = 2; i <= n; ++i)
        {
            for(int j = 1; j <= n - i; ++j)
            {
                cout << "  ";
            }
            for(int j = 0; j < i; ++j)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
    else
    {
        for(int i = n; i > 0; --i)
        {
            for(int j = 1; j <= i - 1; ++j)
            {
                cout << " ";
            }
            for(int j = 1; j <= i; ++j)
            {
                cout << "*";
            }
            cout << endl;
        }
        for(int i = 2; i <= n; ++i)
        {
            for(int j = 1; j <= i - 1; ++j)
            {
                cout << " ";
            }
            for(int j = 1; j <= i; ++j)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
}

int main()
{
    int n, left;
    cin >> n >> left;
    printArrow(n, left);
}