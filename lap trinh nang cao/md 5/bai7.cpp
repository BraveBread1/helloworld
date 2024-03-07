#include<iostream>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int cc = 0, cs = 0, kt = 0;
    for(string::iterator it = s.begin(); it != s.end(); ++it)
    {
        if((*it >= 'a' && *it <= 'z') || (*it >= 'A' && *it <= 'Z'))
        {
            ++cc;
        }
        else if(*it >= '0' && *it <= '9') ++ cs;
        else ++kt;
    }
    cout << cc << " " << cs << " " << kt;
    return 0;
}