#include<iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int cnt = 1;
    for(int i = 0; i < n; ++i)
    {
        ++cnt;
        for(int j = 0; j < n; ++j) 
        {
            cout << cnt + j << " ";
        }
        cout << endl;
    }
    return 0;
}