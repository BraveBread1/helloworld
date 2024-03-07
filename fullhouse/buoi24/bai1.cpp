#include<iostream>

using namespace std;

long long ucln(long long a, long long b) {
    while(b != 0) {
        long long tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

class frac{
    private:
        long long num, denom;
    public:
        friend void toiGian(frac &a);
        friend istream& operator >> (istream& in, frac &a);
        friend ostream& operator << (ostream& out, frac a);
};

void toiGian(frac &a) {
    long long uoc = ucln(a.num, a.denom);
    a.num /= uoc;
    a.denom /= uoc;
}

istream& operator >> (istream& in, frac &a) {
    in >> a.num >> a.denom;
    return in;
}

ostream& operator << (ostream& out, frac a) {
    out << a.num << "/" << a.denom;
    return out;
}

int main() {
    frac a;
    cin >> a;
    toiGian(a);
    cout << a;
    return 0;
}