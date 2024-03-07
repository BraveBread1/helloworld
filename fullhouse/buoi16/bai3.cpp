#include<iostream>

using namespace std;

int main() {
    string n;
    getline(cin, n);
    int tong = 0;
    for(string::iterator it = n.begin(); it != n.end();) {
        if(*it >= '0' && *it <= '9') {
            int tmp = 0;
            while(it != n.end() && *it >= '0' && *it <= '9') {
                tmp = tmp * 10 + *it - '0';
                ++it;
            }
            tong += tmp;
        }
        else ++it;
    }
    cout << tong;
    return 0;
}