#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> v(2, 1);
    int f1 = 1;
    int f2 = 1;
    int f = 2;
    while(f <= n)
    {
        v.push_back(f);
        f1 = f2;
        f2 = f;
        f = f1 + f2;
    }
    if(n == f2) cout << "Thuoc day Fibonacci" << endl;
    else cout << "Khong thuoc day Fibonacci" << endl;
    for(vector<int>::iterator it = v.begin(); it != v.end(); ++it)
    {
        cout << *it << " ";
    }
    return 0;
}