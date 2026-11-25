
#include <iostream>
using namespace std;

int main() {

  
    try {
        int a = 10, b = 0;

        if (b == 0)
            throw "Division by zero is not allowed";

        cout << "Result = " << a / b << endl;
    }
    catch (const char* msg) {
        cout << "Exception: " << msg << endl;
    }

   
    try {
        int balance = 5000;
        int amount = 6000;

        if (amount > balance)
            throw amount;

        balance = balance - amount;
        cout << "Remaining Balance = " << balance << endl;
    }
    catch (int amount) {
        cout << "Exception: Insufficient balance for withdrawal of "
             << amount << endl;
    }

    
    try {
        int age = 15;

        if (age < 18)
            throw 1;

        cout << "Eligible" << endl;
    }
    catch (int) {
        cout << "Exception: Age must be 18 or above" << endl;
    }

    return 0;
}
