#include<iostream>

using namespace std;

int main()
{
    int t; cin >> t;
    for(t; t > 0; --t)
    {
        int a, b, c; cin >> a >> b >> c;
        int sum = 0;
        if(b < c)
        {
            sum = c - b + c - 1;
        }
        else
        {
            sum = b - 1;
        }
        if(a - 1 < sum) cout << 1 << endl;
        else if(a - 1 == sum) cout << 3 << endl;
        else cout << 2 << endl;
    }
    return 0;
}