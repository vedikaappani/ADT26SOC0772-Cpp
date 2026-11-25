
#include <iostream>
using namespace std;

// Class Template
template <class T>
class Calculator {
private:
    T a, b;

public:
    Calculator(T x, T y) {
        a = x;
        b = y;
    }

    void add() {
        cout << "Addition = " << a + b << endl;
    }

    void subtract() {
        cout << "Subtraction = " << a - b << endl;
    }

    void multiply() {
        cout << "Multiplication = " << a * b << endl;
    }

    void divide() {
        if (b != 0)
            cout << "Division = " << a / b << endl;
        else
            cout << "Division by zero is not allowed" << endl;
    }
};

int main() {
    Calculator<int> c1(20, 10);

    cout << "Integer Operations:" << endl;
    c1.add();
    c1.subtract();
    c1.multiply();
    c1.divide();

    Calculator<float> c2(15.5, 5.0);

    cout << "\nFloat Operations:" << endl;
    c2.add();
    c2.subtract();
    c2.multiply();
    c2.divide();

    return 0;
}
