#include<iostream>

using namespace std;

double* getPointerToPi() {
    double* i = new double;
    double pi = 3.14159;
    *i = pi;
    return i;
}

int main() {

}