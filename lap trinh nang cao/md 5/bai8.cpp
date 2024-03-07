#include<iostream>
#include<sstream>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string tmp;
    while(ss >> tmp)
    {
        if(tmp.substr(0, 4) == "Zues")
        {
            tmp.replace(0, 4, "Zeus");
        }
        cout << tmp << " ";
    }
    return 0;
}