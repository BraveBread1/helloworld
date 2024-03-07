#include<iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    for(t; t > 0; --t)
    {
        int a, b; cin >> a >> b;
        if(a % 2 == 0 && b % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else if(a % 2 == 0)
        {
            if(a / 2 != b) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else if(b % 2 == 0)
        {
            if(b / 2 != a) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}