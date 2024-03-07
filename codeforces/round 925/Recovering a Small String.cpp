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
        string result;
        if(n <= 28)
        {
            n -= 2;
            result += "aa";
            result += (char)(n + 'a' - 1);
        }
        else if(n <= 53)
        {
            n -= 27;
            result += 'a';
            result += (char)(n + 'a' - 1);
            result += 'z';
        }
        else
        {
            n -= 52;
            result += (char)(n + 'a' - 1);
            result += "zz";
        }
        cout << result << endl;
    }
    return 0;
}