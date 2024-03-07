#include<iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    string result;
    int cnt = 1;
    while(result.size() <= n)
    {
        result += to_string(cnt);
        ++cnt;
    }
    cout << result[n - 1];
    return 0;
}