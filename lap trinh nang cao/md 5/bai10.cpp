#include<iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    if(s.size() < 6 || s.size() > 15)
    {
        cout << "Invalid username.";
        return 0;
    }
    if(s[0] >= '0' && s[0] <= '9')
    {
        cout << "Invalid username.";
        return 0;
    }
    for(string::iterator it = s.begin(); it != s.end(); ++it)
    {
        if(((*it <= 'z' && *it >= 'a') || (*it >= 'A' && *it <= 'Z') || (*it >= '0' && *it <= '9')) != true)
        {
            cout << "Invalid username.";
            return 0;
        }
    }
    cout << "Valid username.";
    return 0;
}