#include<iostream>

using namespace std;

int main()
{
    int q; cin >> q;
    for(q; q > 0; --q)
    {
        int n, a, b; cin >> n >> a >> b;
        int c = n - a;
        if(c > b + 1) cout << b + 1 << endl;
        else cout << c << endl;
    }
    return 0;
}