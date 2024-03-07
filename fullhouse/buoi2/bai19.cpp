#include<iostream>

using namespace std;

int main() {
    long long n; cin >> n;
    if(n % 2 == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
    if(n % 3 == 0 && n % 5 == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
    if(n % 3 == 0 && n % 7 != 0) cout << "YES" << endl;
    else cout << "NO" << endl;
    if(n % 3 == 0 || n % 7 == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
    if(n > 30 && n < 50) cout << "YES" << endl;
    else cout << "NO" << endl;
    if(n >= 30 && (n % 2 == 0 || n % 3 == 0 || n % 5 == 0)) cout << "YES" << endl;
    else cout << "NO" << endl;
    if(n % 10 != 0 && n % 100 == 0) {
        int du = n % 10;
        if(du == 2 || du == 3 || du == 7 || du == 5) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    else cout << "NO" << endl;
    if(n <= 100 && (n % 23 == 0)) cout << "YES" << endl;
    else cout << "NO" << endl;
    if(n < 10 || n > 20) cout << "YES" << endl;
    else cout << "NO" << endl;
    int du = n % 10;
    if(du % 3 == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0; 
}