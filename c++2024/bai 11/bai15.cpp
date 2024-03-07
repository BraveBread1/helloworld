#include<iostream>

using namespace std;

void swap(int** a, int n, int c, int b)
{ 
    for(int i = 0; i < n; ++i)
    {
        int tmp = a[c][i];
        a[c][i] = a[b][i];
        a[b][i] = tmp;
    }
}

int main()
{
    int n; cin >> n;
    int** a = new int*[n];
    for(int i = 0; i < n; ++i)
    {
        a[i] = new int [n];
    }
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            cin >> a[i][j];
        }
    }
    for(int i = n - 1; i > 0; -- i)
    {
        swap(a, n, i, i - 1);
    }
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}