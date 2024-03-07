#include<iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    bool cs = true;
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < n; ++i) 
    {
        int x; cin >> x;
        if(x != a[i])
        {
            cs = false;
        }
    }
    if(cs) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}