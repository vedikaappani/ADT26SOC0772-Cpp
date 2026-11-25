
#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    // Pure virtual function
    virtual void area() = 0;
};

// Derived class
class Rectangle : public Shape {
private:
    int length, breadth;

public:
    Rectangle(int length, int breadth) {
        this->length = length;
        this->breadth = breadth;
    }

    void area() override {
        cout << "Area of Rectangle = "
             << length * breadth << endl;
    }
};

int main() {
    Rectangle r(10, 5);

    // Pointer to object
    Rectangle *ptr = &r;

    cout << "Using Pointer to Object:" << endl;
    ptr->area();

    return 0;
}
