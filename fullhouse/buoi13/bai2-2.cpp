#include<iostream>

using namespace std;

int main() {
    int n; cin >> n;
    int * a = new int [n + 1];
    int *sum = new int[n + 1];
    a[0] = 0;
    sum[0] = 0;
    for(int i = 1; i <= n; ++i) {
        cin >> a[i];
        sum[i] = sum[i - 1] + a[i];
    }
    int min_sum = 0;
    int max_sum = 0;
    for(int i = 1; i <= n; ++i) {
        if(sum[i] < min_sum) {
            min_sum = sum[i];
        }
        if(max_sum < sum[i] - min_sum) {
            max_sum = sum[i] - min_sum;
        }
    }
    cout << max_sum;
    return 0;
}