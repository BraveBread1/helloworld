#include<iostream>
#include<string>

using namespace std;

const int du = 1000000007;

bool check(string i, string k) {
    if(i.find(k)) return true;
    else return false;
}

void tang(string &i) {
    int x = i.size() - 1;
    bool cs = true;
    while(i[x] == '9') {
        i[x] = 0;
        --x;
        if(x == 0 && i[x] == 9) {
            i = "1" + i;
            i[x] == 0;
            cs = false;
            break;
        }
    }
    if(cs) i[x] += 1;
}

int main() {
    string l, r, k;
    cin >> l >> r >> k;
    int dem = 0;
    for(string i = l; i != r; tang(i)) {
        if(check(i, k)) ++dem;
        if(dem > du) dem %= du;
    }
    cout << dem << endl;
    return 0;
}