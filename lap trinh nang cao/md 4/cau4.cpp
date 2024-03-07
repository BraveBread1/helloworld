#include<iostream>

using namespace std;

int main()
{
    int con, chan;
    cin >> con >> chan;
    int chick = 1, dog;
    bool cs = false;
    while(chick * 2 <= chan && chick < con)
    {
        dog = con - chick;
        if(chick * 2 + dog * 4 == chan)
        {
            cs = true;
            break;
        }
        ++chick;
    }
    if(cs)
    {
        cout << "chicken = " << chick << ", dog = " << dog;
    }
    else
    {
        cout << "invalid";
    }
    return 0;
}