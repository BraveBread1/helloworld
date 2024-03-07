#include<iostream>

using namespace std;

void swap(int* a, int c, int b)
{
    int tmp = a[c];
    a[c] = a[b];
    a[b] = tmp;
}

void in(int n, int* a, int x)
{
    if(x == n) return;
    for(int i = x + 1; i < n; ++i)
    {
        int *b;
        b = a;
        swap(b, i, x);
        for(int i = 0; i < n; ++i) cout << b[i] << " ";
        cout << endl;
        in(n, a, x + 1);
    }
}

int main()
{
    int n; cin >> n;
    int* a = new int[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    in(n, a, 0);
    return 0;
}