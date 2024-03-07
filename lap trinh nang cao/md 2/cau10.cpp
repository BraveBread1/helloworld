#include<iostream>

using namespace std;

string toLower(string s)
{
    for(string::iterator it = s.begin(); it != s.end(); ++it)
    {
        if(*it >= 'A' && *it <= 'Z')
        {
            *it = *it + 'a' - 'A';
        }
    }
    return s;
}

int main()
{

}