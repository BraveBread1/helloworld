#include<iostream>
#include<set>

using namespace std;

int main()
{
    int n; cin >> n;
    set<int> a;
    for(int i = 0; i < n; ++i)
    {
        int x; cin >> x;
        a.insert(x);
    }
    for(set<int>::iterator it = a.begin(); it != a.end(); ++it)
    {
        cout << *it << " ";
    }
    return 0;
}