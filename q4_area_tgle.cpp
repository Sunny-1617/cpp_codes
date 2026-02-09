#include <iostream>
#include <cmath>
using namespace std;

struct Point { float x, y; };

float dist(Point p1, Point p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int main() {
    Point p1, p2, p3;
    cout << "Enter coordinates for P1, P2, P3 (x y): ";
    cin >> p1.x >> p1.y >> p2.x >> p2.y >> p3.x >> p3.y;

    cout << "Addresses: P1:" << &p1 << " P2:" << &p2 << " P3:" << &p3 << endl;

    float a = dist(p1, p2), b = dist(p2, p3), c = dist(p3, p1);
    float s = (a + b + c) / 2;
    float area = sqrt(s * (s - a) * (s - b) * (s - c));

    cout << "Area of Triangle: " << area << endl;
    return 0;
}
