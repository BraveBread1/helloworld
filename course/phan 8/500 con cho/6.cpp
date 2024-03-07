#include<iostream>

using namespace std;

int* merge(int* firstArr, int lenArr1, int* secondArr, int lenArr2) {
    int* a = new int[lenArr1 + lenArr2];
    int x = 0, y = 0;
    bool cs = true;
    for(int i = 0; i < lenArr1 - 1; ++i) {
        if(firstArr[i] < firstArr[i + 1]) {
            cs = true;
            break;
        }
        if(firstArr[i] > firstArr[i + 1]) {
            cs = false;
            break;
        }
    }
    if(cs) {
        while(x < lenArr1 && y < lenArr2) {
            if(firstArr[x] <= secondArr[y]) {
                a[x + y] = firstArr[x];
                ++x;
            }
            else {
                a[x + y] = secondArr[y];
                ++y;
            }
        }
        while(x < lenArr1) {
            a[x + y] = firstArr[x];
            ++x;
        }
        while(y < lenArr2) {
            a[x + y] = secondArr[y];
            ++y;
        }
    }
    else {
        while(x < lenArr1 && y < lenArr2) {
            if(firstArr[x] >= secondArr[y]) {
                a[x + y] = firstArr[x];
                ++x;
            }
            else {
                a[x + y] = secondArr[y];
                ++y;
            }
        }
        while(x < lenArr1) {
            a[x + y] = firstArr[x];
            ++x;
        }
        while(y < lenArr2) {
            a[x + y] = secondArr[y];
            ++y;
        }
    }
    return a;
}

int main() {

}