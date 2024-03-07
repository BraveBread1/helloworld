#include<iostream>

using namespace std;

bool check(string a)
{
    long long result = 0;
    for(int i = 0; i < a.size(); ++i)
    {
        result = result * 2 + a[i] - '0';
    }
    while(result != 0)
    {
        int du = result % 10;
        if(du != 1 && du != 0) return false;
        result /= 10;
    }
    return true;
}

int main()
{
    int q; cin >> q;
    for(q; q > 0; --q)
    {
        string a; cin >> a;
        if(check(a)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}