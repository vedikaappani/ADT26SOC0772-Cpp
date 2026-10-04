# Experiment 2: Rectangle class with memeber function 

#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:

    void setDimensions() {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
    }


    float calculateArea() {
        return length * width;
    }


    float calculatePerimeter() {
        return 2 * (length + width);
    }


    void display() {
        cout << "\n--- Rectangle Details ---" << endl;
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << calculateArea() << endl;
        cout << "Perimeter: " << calculatePerimeter() << endl;
    }
};

int main() {
    Rectangle rect;

    rect.setDimensions();
    rect.display();

    return 0;
}