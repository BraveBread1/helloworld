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
        int n; cin >> n;
        string s; cin >> s;
        int begin, end;
        for(int i = 0; i < n; ++i)
        {
            if(s[i] == 'B')
            {
                begin = i;
                break;
            }
        }
        for(int i = n - 1; i >= 0; --i)
        {
            if(s[i] == 'B')
            {
                end = i;
                break;
            }
        }
        cout << end - begin + 1 << endl;
    }
    return 0;
}