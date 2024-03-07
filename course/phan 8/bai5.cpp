#include<iostream>
#include<cmath>

using namespace std;

void normalize(double *out, int *in, int n) {
    for(int i = 0; i < n; ++i) {
        out[i] = (double)in[i] / 255;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    return 0;
}