#include<iostream>
#include<string>
#include<cmath>
using namespace std;

    // a= sqrt(sqr(height)+ sqr(base/2))
    // Isosceles triangle

class Triangle {
private:
    double height;
    double base;
public:
    Triangle() { base = 0; height = 0; }
    ~Triangle() {}
    double getHeight() {
        return height;
    }
    void setHeight() {
        cout << "Height:"; cin >> height;
    }
    double getBase() {
        return base;
    }
    void setBase() {
        cout << "Base:"; cin >> base;
    }
    double Area() {
        return getHeight() * getBase() / 2;
    }
    double Perimeter() {
        return  2 * sqrt(base * base / 4 + height * height) + base;
    }
    void Display() {
        cout << "The height of triangle is: " << height << endl;
        cout << "The base of triangle is: " << base << endl;
        cout << "The area of the triangle is: " << Area() << endl;
        cout << "The perimeter of the triangle is :" << Perimeter() << endl;
    }
};