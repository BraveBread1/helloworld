#include<iostream>
#include<fstream>

using namespace std;

int main() {
    ifstream in;
    in.open("input.txt");
    string n;
    getline(in, n);
    ofstream out;
    out.open("input.txt");
    out << n;
    return 0;
}