#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;
int giaiPT(float a, float b, float c,float &x1, float &x2){
	float delta = b*b - 4*a*c;
	if(delta<0){
		x1=x2=0.0;
		return 0;
	}
	else if(delta==0){
		x1 = x2 = -b/(2*a);
		return 1;
	}
	else{
		delta = sqrt(delta);
		x1 = (-b + delta) / (2*a);
		x2 = (-b - delta) / (2*a);
		return 2;
	}
}
int main(){
	float a,b,c;
	float x1,x2;
    cin >> a >> b >> c;
    b = -b;
	while(!a);
        int numNo = giaiPT(a,b,c,x1,x2);
	if(numNo ==0 ) {
		cout<< "0" << endl;
	}
	else if(numNo==1){
		cout<< "1" << endl;
        cout << fixed << setprecision(2) << x1 << " 0.00";
	}
	else{
		cout<< "2" << endl;
        if(x1 < x2) {
            cout << fixed << setprecision(2) << x1 << " 0.00" << endl;
            cout << fixed << setprecision(2) << x2 << " 0.00";
        }
        else {
            cout << fixed << setprecision(2) << x2 << " 0.00" << endl;
            cout << fixed << setprecision(2) << x1 << " 0.00";
        }
	}
}