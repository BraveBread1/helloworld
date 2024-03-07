#include<iostream>

using namespace std;

int main() {
    int n, s;
    cin >> n >> s;
    int price[n];
    for(int i = 0; i < n; ++i) {
        cin >> price[i];
    }
    int result[s + 1];
    result[0] = 0;
    for(int i = 1; i <= s; ++i) {
        result[i] = 2e9;
        for(int j : price) {
            if(j <= i && result[i] > result[i - j] + 1) {
                result[i] = result[i - j] + 1;
            }
        }
    }
    if(result[s] != 2e9) {
        cout << result[s];
    }
    else {
        cout << "-1";
    }
    return 0;
}