#include<iostream>

using namespace std;

int main()
{
    int n, k; cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    int max = a[0];
    int index = 0;
    for(int i = 1; i < k; ++i)
    {
        if(a[i] >= max) 
        {
            max = a[i];
            index = i;
        }
    }
    cout << max << " ";
    for(int i = 1; i <= n - k; ++i)
    {
        if(index == i - 1)
        {
            max = a[i];
            index = i;
            for(int j = i + 1; j < i + k; ++j)
            {
                if(a[j] >= max)
                {
                    max = a[j];
                    index = j;
                }
            }
        }
        else if(a[i + k - 1] >= max)
        {
            max = a[i + k - 1];
            index = i;
        }
        cout << max << " ";
    }
    return 0;
}