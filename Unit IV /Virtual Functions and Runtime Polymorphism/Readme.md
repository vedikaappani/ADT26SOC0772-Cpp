
#include <iostream>
using namespace std;


class Shape {
public:
    virtual void area() {
        cout << "Area of Shape" << endl;
    }
};


class Circle : public Shape {
public:
    void area() override {
        cout << "Area of Circle = " << 3.14 * 5 * 5 << endl;
    }
};


class Rectangle : public Shape {
public:
    void area() override {
        cout << "Area of Rectangle = " << 10 * 5 << endl;
    }
};

int main() {
    Shape *ptr;

    Circle c;
    Rectangle r;

    ptr = &c;
    ptr->area();

    ptr = &r;
    ptr->area();

    return 0;
}
