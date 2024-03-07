#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int n; cin >> n;
    int result = n;
    int sum = 0;
    do
    {
        while(result > 0)
        {
            sum += pow(result % 10, 2);
            result /= 10;
        }
        result = sum;
        sum = 0;
    }
    while(result != 1 && result != 4);
    if(result == 1) cout << "Yes";
    else cout << "No";
    return 0;
}