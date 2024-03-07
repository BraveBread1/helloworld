#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

class toaDo{
    private:
        int x, y;
    public:
        friend double khoangCach(toaDo a, toaDo b);
        friend istream& operator >> (istream& in, toaDo &a) {
            in >> a.x >> a.y;
            return in;
        }
};

double khoangCach(toaDo a, toaDo b) {
    double result = sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
    return result;
}

int main() {
    toaDo a, b;
    cin >> a >> b;
    cout << fixed << setprecision(4) << khoangCach(a, b);
    return 0;
}