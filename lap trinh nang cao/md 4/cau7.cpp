#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x; cin>>x;
    double sum=1, oldSum=0;
    double xExp=1, xGiaiThua=1, i=1;
    while(sum-oldSum>0.001)
    {
        oldSum=sum;
        xExp*=x;
        xGiaiThua*=i;
        i++;
        sum+=xExp/xGiaiThua;
    }
    cout<<fixed<<setprecision(4)<<sum<<endl;
}