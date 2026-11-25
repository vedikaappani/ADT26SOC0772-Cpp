
#include <iostream>
using namespace std;


class Shape {
public:
    
    virtual void area() = 0;
};


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

    
    Rectangle *ptr = &r;

    cout << "Using Pointer to Object:" << endl;
    ptr->area();

    return 0;
}
