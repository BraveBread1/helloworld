#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    string n; cin >> n;
    sort(n.begin(), n.end());
    for(string::reverse_iterator it = n.rbegin(); it != n.rend(); ++it) cout << *it;
    cout << endl;
    for(string::iterator it = n.begin(); it != n.end(); ++it) cout << *it;
    return 0;
}