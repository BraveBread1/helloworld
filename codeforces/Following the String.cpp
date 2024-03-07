#include<iostream>
#include<map>

using namespace std;

int main()
{
    int t; cin >> t;
    for(t; t > 0; --t)
    {
        int n; cin >> n;
        int a[n + 1];
        string result;
        for(int i = 1; i <= n; ++i)
        {
            cin >> a[i];
        }
        map<char, int> m;
        char c = 'a';
        for(int i = 1; i <= n; ++i)
        {
            if(a[i] == 0)
            {
                m.insert({c, 1});
                result += c;
                ++c;
            }
            else
            {
                for(map<char, int>::iterator it = m.begin(); it != m.end(); ++it)
                {
                    if(it->second == a[i])
                    {
                        result += it->first;
                        ++it->second;
                        break;
                    }
                }
            }
        }
        cout << result << endl;
    }
    return 0;
}