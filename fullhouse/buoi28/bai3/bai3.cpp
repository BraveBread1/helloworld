#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    ifstream in;
    in.open("inputNumber.txt");
    ofstream out;
    out.open("outputNumber.txt");
    int x = 0;
    vector<int> v;
    while(in >> x) {
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    for(vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
        out << *it << " ";
    }
    return 0;
}