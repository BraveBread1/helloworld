#include<iostream>

using namespace std;

int** transpose(int** matrix, int m, int n) {
    int** a = new int*[n];
    for(int i = 0; i < n; ++i) {
        a[i] = new int[m];
    }
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            a[i][j] = matrix[j][i];
        }
    }
    return a;
}

int main() {

}