#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int n, k; cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    vector<int> v;
    for(int i = 0; i < k; ++i)
    {
        v.push_back(a[i]);
    }
    if(v.size() % 2 == 0)
    {
        cout << v[v.size() / 2 - 1] << " ";
    }
    else
    {
        cout << v[v.size() / 2] << " ";
    }
    for(int i = 1; i < n - k + 1; ++i)
    {
        
    }
    return 0;
}