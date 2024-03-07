#include<iostream>

using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    string result;
    cout << a << endl << b << endl;
    for(int i = 2; i <= 10; ++i)
    {
        result = b + a;
        cout << result << endl;
        a = b;
        b = result;
    }
    return 0;
}