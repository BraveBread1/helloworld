#include <stdio.h>
#include <math.h>

long long factorial (int n) {
    if (n == 1 || n == 0) return 1;
    return 1ll*n*factorial(n-1);
}

void solve(int a, int m, int b, int n){
    long long res = factorial(m) / (factorial(a) * factorial(m-a)) - factorial(n) / (factorial(b) * factorial(n-b));
    printf("%lld\n", res);
}

int main(){
    int test;
    scanf("%d", &test);
    int a, m, b, n;
    while(test--){
        scanf("%d %d %d %d", &a, &m, &b, &n);
        solve(a, m, b, n);
    }
}