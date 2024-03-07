#include<iostream>
#include<vector>

using namespace std;

void decToHex(long long n, vector<int> &a) {
    if(n == 0) return;
    a.push_back(n % 16);
    return decToHex(n / 16, a);
}

int main() {
    long long n; cin >> n;
    vector<int> a;
    decToHex(n, a);
    for(vector<int>::reverse_iterator it = a.rbegin(); it != a.rend(); ++it) {
        if(*it == 10) cout << "A";
        else if(*it == 11) cout << "B";
        else if(*it == 12) cout << "C";
        else if(*it == 13) cout << "D";
        else if(*it == 14) cout << "E";
        else if(*it == 15) cout << "F";
        else cout << *it;
    }
    return 0;
}