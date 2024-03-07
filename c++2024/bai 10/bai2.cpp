#include<iostream>

using namespace std;

int main()
{
    int n, x; cin >> n >> x;
    int a[n + 1];
    for(int i = 1; i <= n; ++i) cin >> a[i];
    bool cs = false;
    for(int i = 1; i < n; ++i)
    {
        for(int j = n; j > i; --j) 
        {
            if(a[j] == x - a[i])
            {
                cout << i << " " << j;
                return 0;
            }
            else if(a[j] < x - a[i]) break;
        }
    }
    cout << "No solution";
    return 0;
}