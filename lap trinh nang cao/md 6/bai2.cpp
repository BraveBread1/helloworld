#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    string s; cin >> s;
    ifstream in;
    in.open(s);
    if(in.is_open())
    {
        int max = 0;
        int min = 999999999;
        int tmp;
        while(in >> tmp)
        {
            if(tmp > max) max = tmp;
            if(tmp < min) min = tmp;
        }
        cout << max << " " << min;
    }
    else{
        cout << "Mission failed";
    }
    in.close();
    return 0;
}