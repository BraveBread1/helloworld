#include<iostream>

using namespace std;

int main() {
    int n; cin >> n;
    for(int i = 1; i <= n; i++) cout << i;
    cout << endl;
    for (int i = n + 1; i <= 2 * n; i++) cout << i;
    cout << endl;
    for(int i = 2 * n + 1; i <= 3 * n; i++) cout << i << " ";
    cout << endl;
    for(int i = 3 * n + 1; i <= 4 * n; i++) cout << i << " ";
    cout << endl;
    for(int i = 4 * n + 1; i <= 5 * n; i++) cout << i << " ";
    cout << endl;
    return 0;
}