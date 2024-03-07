#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int t; cin >> t;
    for(t; t > 0; --t)
    {
        string n; cin >> n;
        string nguoc = n;
        reverse(nguoc.begin(), nguoc.end());
        if(nguoc == n)
        {
            cout << "Yes" << endl;
        }
        else cout << "No" << endl;
    }
    return 0;
}