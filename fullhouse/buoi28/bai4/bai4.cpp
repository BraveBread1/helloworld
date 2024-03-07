#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>

using namespace std;

bool nt(int n) {
    if(n < 2) return false;
    for(int i = 2; i * i <= n; ++i) {
        if(n % i == 0) return false;
    }
    return true;
}

int main() {
    ifstream in;
    in.open("inputNumber.txt");
    ofstream out;
    out.open("outputNumber.txt");
    int x;
    vector<int> v;
    while(in >> x) {
        if(nt(x)) v.push_back(x);
    }
    sort(v.begin(), v.end());
    for(vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
        out << *it << " ";
    }
    return 0;
}