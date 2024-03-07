#include<iostream>

using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    string::reverse_iterator it = a.rbegin();
    string::reverse_iterator it2 = b.rbegin();
    string result;
    int du = 0;
    while(it != a.rend() && it2 != b.rend()) {
        int tong = static_cast<int>(*it) + static_cast<int>(*it2) + du - 96;
        if(tong >= 10) {
            result = to_string(tong - 10) + result;
            du = 1;
        } 
        else {
            du = 0;
            result = to_string(tong) + result;
        }
        ++it;
        ++it2;
    }
    while(it != a.rend()) {
        int tong = static_cast<int>(*it) + du - 48;
        if(tong >= 10) {
            result = to_string(tong - 10) + result;
            du = 1;
        } 
        else {
            du = 0;
            result = to_string(tong) + result;
        }
        ++it;
    }
    while(it2 != b.rend()) {
        int tong = static_cast<int>(*it2) + du - 48;
        if(tong >= 10) {
            result = to_string(tong - 10) + result;
            du = 1;
        } 
        else {
            du = 0;
            result = to_string(tong) + result;
        }
        ++it2;
    }
    if(du == 1) result = "1" + result;
    cout << result;
    return 0;
}