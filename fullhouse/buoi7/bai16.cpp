#include<iostream>

using namespace std;

int main() {
    int n; cin >> n;
    bool isPrime[n + 1];
    for(int i = 2; i <= n; ++i) {
        isPrime[i] = true;
    }
    isPrime[0] = false;
    isPrime[1] = false;
    for(int i = 2; i * i <= n; ++i) {
        if(isPrime[i]) {
            for(int a = i * i; a <= n; a += i){
                isPrime[a] = false;
            }
        }
    }
    for(int i = 2; i <= n; ++i) {
        if(isPrime[i]) cout << i << " ";
    }
    return 0;
}