#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int t; cin >> t;
    for(t; t > 0; --t)
    {
        int max = 0;
        int n; cin >> n;
        int a, b;
        for(int i = 0; i < n; ++i)
        {
            cin >> a >> b;
            double c = sqrt(a * a + b * b);
            int d = c;
            if(c > d) ++d;
            if(d > max) max = d;
        }
        cout << max << endl;
    }
    return 0;
}