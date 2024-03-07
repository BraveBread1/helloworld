#include<iostream>

using namespace std;

template <class T>
T maximum(T a, T b, T c, T d) {
    T max = a;
    if(b > max) max = b;
    if(c > max) max = c;
    if(d > max) max = d;
    return max;
}

int main() {
    
}