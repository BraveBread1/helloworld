#include<iostream>

using namespace std;

int main() {
    string n; cin >> n;
    if(*(n.end() - 1) % 2 == 0) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}