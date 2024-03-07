#include<iostream>

using namespace std;

int ucll(int a, int b) {
    int du;
    while(b != 0) {
        du = a % b;
        a = b; b = du;
    }
    return a;
}

int main() {
    int a, b; cin >> a >> b;
    for(int i = a; i < b; ++i){
        for(int n = i + 1; n <= b; ++n) {
            if(ucll(i, n) == 1) cout << "(" << i << "," << n << ")" << endl;
        }
    }
    return 0;
}