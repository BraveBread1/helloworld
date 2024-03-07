#include<iostream>
#include<map>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n][n];
    map<int, int> m;
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            cin >> a[i][j];
            while(a[i][j] > 0)
            {
                ++m[a[i][j] % 10];
                a[i][j] /= 10;
            }
        }
    }
    int max = 0, index = 0;
    for(map<int, int>::iterator it = m.begin(); it != m.end(); ++it)
    {
        if(it->second > max)
        {
            max = it->second;
            index = it->first;
        }
    }
    cout << index << " " << max;
    return 0;
}