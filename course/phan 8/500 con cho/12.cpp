#include<iostream>

using namespace std;

int* selfDividingNumbers(int left, int right, int* returnSize) {
    *returnSize = 0;
    int *a = new int [100000];
    for(int i = left; i <= right; ++i) {
        int n = i;
        bool cs = true;
        while(n > 0) {
            if(n % 10 == 0) {
                cs = false;
                break;
            }
            if(i % (n % 10) != 0) {
                cs = false;
                break;
            }
            n /= 10;
        }
        if(cs) {
            a[*returnSize] = i;
            ++*returnSize;
        }
    }
    return a;
}

int main() {

}