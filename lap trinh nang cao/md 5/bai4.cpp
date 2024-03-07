#include<iostream>
#include<set>
#include<iomanip>

using namespace std;

int main()
{
    int n; cin >> n;
    multiset<double> a;
    for(int i = 0; i < n; ++i)
    {
        double x; cin >> x;
        a.insert(x);
    }
    double k; cin >> k;
    a.insert(k);
    for(multiset<double>::iterator it = a.begin(); it != a.end(); ++it)
    {
        cout << fixed << setprecision(2) << *it << " ";
    }
    return 0;
}