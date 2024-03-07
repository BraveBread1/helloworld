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
        int cnt = 0;
        int sum = 0;
        int tmp;
        while(in >> tmp)
        {
            if(tmp > max) max = tmp;
            if(tmp < min) min = tmp;
            ++cnt;
            sum += tmp;
        }
        cout << cnt << " " << min << " " << max << " " << sum;
    }
    else{
        cout << "Mission failed";
    }
    in.close();
    return 0;
}