#include<iostream>

using namespace std;

int main()
{
    int q; cin >> q;
    for(q; q > 0; --q)
    {
        int a; cin >> a;
        long long b = a * a;
        int sum = 0;
        while(b > 0)
        {
            sum += b % 10;
            b /= 10;
        }
        cout << sum << endl;
    }
    return 0;
}