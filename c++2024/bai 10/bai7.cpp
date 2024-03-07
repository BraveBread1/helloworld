#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i) 
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int firstStep = min(a[1] - a[0] - 1, a[n - 1] - a[n - 2] - 1);
    int maxStep = a[n - 1] - a[0] + 1 - n - firstStep;
    int minStep = a[n - 1] - a[0] + 1;
    int maxSheep = 0;
    for(int i = 0; i < n - 1; ++i)
    {
        int j = i + 1;
        maxSheep = 1;
        while(a[j] - a[i] + 1 <= n && j < n)
        {
            ++j;
            ++maxSheep;
        }
        if(a[j] - a[i] + 1 >= n)
        {
            if(minStep > n - maxSheep) {
                if(maxSheep == n - 1) 
                {
                    if((a[j - 1] - a[i] == n - 2) && (a[j] - a[j - 1] != 2)) minStep = 2;
                    else minStep = n - maxSheep;
                }
                else minStep = n - maxSheep;
            }
        }
    }
    cout << minStep << endl << maxStep;
}