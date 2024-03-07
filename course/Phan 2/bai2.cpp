#include<iostream>

using namespace std;

int main() {
    string name1, name2;
    getline(cin, name1);
    getline(cin, name2);
    cout << "Hello " << name1 << " and " << name2 << ".";
    return 0;
}