#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    ifstream in;
    in.open(s);
    if(in.is_open())
    {
        cout << "YES";
    }
    else cout << "NO";
    in.close();
    return 0;
}