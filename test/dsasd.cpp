#include<iostream>

using namespace std;

void in(int n, int k, int i, string r)
{
    if(i > k) 
    {
        cout << r << endl;
        return;
    }
    for(int x = 0; x < n; ++x)
    {
        string result = r;
        char c = 'a' + x;
        bool cs = true;
        for(string::iterator it = r.begin(); it != r.end(); ++it)
        {
            if(c == *it)
            {
                cs = false;
                break;
            }
        }
        if(cs)
        {
            result += c;
            in(n, k, i + 1, result);
        }
    }
}

int main()
{
    int n, k; cin >> n >> k;
    if(n < 1 || n > 26 || n < k || k < 1)
    {
        cout << "-1";
        return 0;
    }
    string result;
    in(n, k, 1, result);
}