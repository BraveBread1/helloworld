#include<iostream>
#include<sstream>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    for(string::iterator it = s.begin(); *it == ' '; ++it)
    {
        cout << *it;
    }
    stringstream ss(s);
    string tmp;
    while(ss >> tmp)
    {
        cout << tmp << " ";
    }
    return 0;
}