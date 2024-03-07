#include<iostream>

using namespace std;

int main()
{
    long long x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4 >> x5 >> y5 >> x6 >> y6;
    long long s = (x2 - x1) * (y2 - y1);
    long long n1, d1;
    if(x3 >= x2 || x4 <= x1) n1 = 0;
    else if(x3 <= x1)
    {
        if(x4 >= x2) n1 = x2 - x1;
        else n1 = x4 - x1;
    }
    else 
    {
        if(x4 >= x2) n1 = x2 - x3;
        else n1 = x4 - x3;
    }
    if(y3 >= y2 || y4 <= y1) d1 = 0;
    else if(y3 <= y1)
    {
        if(y4 >= y2) d1 = y2 - y1;
        else d1 = y4 - y1;
    }
    else 
    {
        if(y4 >= y2) d1 = y2 - y3;
        else d1 = y4 - y3;
    }
    long long s1 = n1 * d1;
    long long n2, d2;
    if(x5 >= x2 || x6 <= x1) n2 = 0;
    else if(x5 <= x1)
    {
        if(x6 >= x2) n2 = x2 - x1;
        else n2 = x6 - x1;
    }
    else 
    {
        if(x6 >= x2) n2 = x2 - x5;
        else n2 = x6 - x5;
    }
    if(y5 >= y2 || y6 <= y1) d2 = 0;
    else if(y5 <= y1)
    {
        if(y6 >= y2) d2 = y2 - y1;
        else d2 = y6 - y1;
    }
    else 
    {
        if(y6 >= y2) d2 = y2 - y5;
        else d2 = y6 - y5;
    }
    long long s2 = n2 * d2;
    int x7, y7, x8, y8;
    long long n3, d3;
    if(x3 >= x6 || x4 <= x5) {
        x7 = -1;
        x8 = -1;
    }
    else if(x3 <= x5)
    {
        if(x4 >= x6) {
            x7 = x5;
            x8 = x6;
        }
        else {
            x7 = x5;
            x8 = x4;
        }
    }
    else 
    {
        if(x4 >= x6) {
            x7 = x3;
            x8 = x6;
        }
        else {
            x7 = x3;
            x8 = x4;
        }
    }
    if(y3 >= y6 || y4 <= y5) {
        y7 = -1;
        y8 = -1;
    }
    else if(y3 <= y5)
    {
        if(y4 >= y6) {
            y7 = y5;
            y8 = y6;
        }
        else {
            y7 = y5;
            y8 = y4;
        }
    }
    else 
    {
        if(y4 >= y6) {
            y7 = y3;
            y8 = y6;
        }
        else {
            y7 = y3;
            y8 = y4;
        }
    }
    if(x7 == -1 || y7 == -1)
    {
        n3 = 0;
        d3 = 0;
    }
    else {
        if(x7 >= x2 || x8 <= x1) n3 = 0;
        else if(x7 <= x1)
        {
            if(x8 >= x2) n3 = x2 - x1;
            else n3 = x8 - x1;
        }
        else 
        {
            if(x8 >= x2) n3 = x2 - x7;
            else n3 = x8 - x7;
        }
        if(y7 >= y2 || y8 <= y1) d3 = 0;
        else if(y7 <= y1)
        {
            if(y8 >= y2) d3 = y2 - y1;
            else d3 = y8 - y1;
        }
        else 
        {
            if(y8 >= y2) d3 = y2 - y7;
            else d3 = y8 - y7;
        }
    }
    long long s3 = n3 * d3;
    if(s - (s1 + s2 - s3) > 0) cout << "YES";
    else cout << "NO";
    return 0;
}