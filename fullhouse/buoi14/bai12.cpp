#include<iostream>
#include<vector>

using namespace std;

void nhiPhan(long long n, vector<int> &a) {
    if(n == 0) return;
    a.push_back(n % 2);
    return nhiPhan(n / 2, a);
}

int main() {
    long long n; cin >> n;
    vector<int> a;
    nhiPhan(n, a);
    for(vector<int>::reverse_iterator it = a.rbegin(); it != a.rend(); ++it) {
        cout << *it;
    }
    return 0;
}