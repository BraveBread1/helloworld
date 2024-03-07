#include<iostream>
#include<vector>

using namespace std;

int main() {
    int n; cin >> n;
    vector<long long> step(n + 1, 0);
    step[0] = 0;
    step[1] = 1;
    step[2] = 2;
    step[3] = 4;
    
}