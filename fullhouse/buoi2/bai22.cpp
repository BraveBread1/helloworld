#include<iostream>
using namespace std;

int main() {
    char a; cin >> a;
    if(a >= 65 && a <= 90) cout << "UPPER";
    else if(a >= 97 && a <= 122) cout << "LOWER";
    else if(a >= 48 && a <= 57) cout << "DIGIT";
    else cout << "SPECIAL";
    return 0;
}