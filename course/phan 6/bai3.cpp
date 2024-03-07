#include<iostream>
#include<fstream>

using namespace std;

int reverse (char* path) {
    ifstream in(path);
    int n;
    in >> n;
    int result = 0;
    while(n != 0) {
        int du = n % 10;
        result = result * 10 + du;
        n /= 10;
    }
    return result;
}

int main() {
    char c = '0';
    cout << (int)c;
    return 0;
}