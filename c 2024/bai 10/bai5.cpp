#include<iostream>

using namespace std;

string convert(int a)
{
    string result;
    while(a != 0)
    {
        result = to_string(a % 2) + result;
        a /= 2;
    }
    return result;
}

int main()
{
    int q; cin >> q;
    for(;q > 0; --q)
    {
        int a, b; cin >> a >> b;
        string a1 = convert(a);
        string b1 = convert(b);
        if(a1.size() < b1.size())
        {
            a1 = string(b1.size() - a1.size(), '0') + a1;
        }
        else if(a1.size() > b1.size())
        {
            b1 = string(a1.size() - b1.size(), '0') + b1;
        }
        bool cs = true;
        for(int i = 0; i < a1.size(); ++i)
        {
            if(a1[i] == b1[i]) {
                cs = false;
                break;
            }
        }
        if(cs) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}