#include<iostream>
#include<math.h>

using namespace std;
int main() {
    long long a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    
    long long s1 = 0, s2 = 0,i =0;
    if( (a - b) * (a - c) * (a - d) * (a - e) < 0) {
        s1 = a;
        i=1;
    }
    if ((b - a) * (b - c) * (b - d) * (b - e) < 0 ) {
        if(i==1){
            s2=b;
        }
        else {s1=b;
        i=1;}
    }
    if ((c - a) * (c - b) * (c - d) * (c - e) < 0 ) {
             if(i==1){
            s2=c;
        }
        else {s1=c;
        i=1;}
    }
    if ((d-a) * (d - b) * (d - c) * (d - e) < 0) {
             if(i==1){
            s2=d;
        }
        else {s1=d;
        i=1;}
    }
    if ((e - a) * (e - b) * (e - c) * (e - d) < 0) {
             if(i==1){
            s2=e;
        }
        else {s1=e;
        i=1;}
    }
    if (s1>s2){cout<<s2;}
    else {cout<<s1;}
    return 0;
}