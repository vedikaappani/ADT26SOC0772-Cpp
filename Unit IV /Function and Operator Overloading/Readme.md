
#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    float add(float a, float b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};

class Distance {
public:
    int meter;

    Distance(int m = 0) {
        meter = m;
    }

    Distance operator+(Distance d) {
        Distance temp;
        temp.meter = meter + d.meter;
        return temp;
    }

    void display() {
        cout << meter << " meters" << endl;
    }
};

int main() {
    Calculator c;

    cout << "Function Overloading:" << endl;
    cout << c.add(10, 20) << endl;
    cout << c.add(2.5f, 3.5f) << endl;
    cout << c.add(10, 20, 30) << endl;

    Distance d1(10), d2(20), d3;

    d3 = d1 + d2;

    cout << "\nOperator Overloading:" << endl;
    d3.display();

    return 0;
}
