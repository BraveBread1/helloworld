#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int low, up;
    cin >> low >> up;
    int a = sqrt(low);
    int b = sqrt(up);
    if(a * a < low) ++a;
    for(int i = a; i <= b; ++i)
    {
        cout << i * i << " ";
    }
    return 0;
}