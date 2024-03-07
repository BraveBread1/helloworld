#include<iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n][n];
    for(int i = 0; i < n; ++i)
    {
        int sum = 0;
        for(int j = 0; j < n; ++j)
        {
            cin >> a[i][j];
            if(a[i][j] % 2 == 0) sum += a[i][j];
        }
        cout << sum << endl;
    }
    return 0;
}