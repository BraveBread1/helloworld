#include <iostream>
using namespace std;

struct Vector {
    double x;
    double y;
    Vector (double _x, double _y){
        x = _x;
        y = _y;
    }
    void printVector(){
        cout << x << " " << y << endl;
    }
};

Vector addVector(Vector v1, Vector v2)
{
    Vector a(0, 0);
    a.x = v1.x + v2.x;
    a.y = v1.y + v2.y;
    return a;
}

int main()
{
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    Vector v1(x1, y1), v2(x2, y2);
    Vector a = addVector(v1, v2);
    a.printVector();
    return 0;
}	