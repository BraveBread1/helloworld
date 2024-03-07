#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

vector<int> listSquare(int a, int b)
{
    vector<int> v;
    for(long unsigned int i = ceil(sqrt(a)); i * i <= b; ++i)
    {
        v.push_back(i * i);
    }
    return v;
}

int main()
{
vector<int> a = listSquare(2, 30);
cout << a.size() << endl;
for (int i = 0; i < a.size(); ++i)
    cout << a[i] << " ";
}