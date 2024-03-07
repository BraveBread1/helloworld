#include<iostream>
#include<fstream>

using namespace std;

int main() {
    ifstream in;
    in.open("Fh.txt");
    ofstream out;
    out.open("Fh.txt");
    out << "FH tat ca la mot nha!";
    in.close();
    out.close();
    return 0;
}