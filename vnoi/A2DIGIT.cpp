#include<iostream>

using namespace std;

int tongchuso(long long n) {
    long long tong = 0; 
    for(int i = n; i > 0; i /= 10) {
        tong += n % 10;
    }
}

int main() {
    long long n, m;
    cin >> n >> m;
    
}