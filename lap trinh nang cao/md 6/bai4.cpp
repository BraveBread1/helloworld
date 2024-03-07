#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    string s; cin >> s;
    cin.ignore();
    ifstream in;
    in.open(s);
    if(!in.is_open())
    {
        cout << "Mission failed";
    }
    else{
        string tmp;
        int cnt = 1;
        while(getline(in, tmp))
        {
            ++cnt;
        }
        cout << cnt;
    }
    return 0;
}