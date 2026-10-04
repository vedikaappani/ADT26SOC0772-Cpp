# Experiment 3: Product class with array of objects 

#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    int id;
    string name;
    float price;
    int quantity;

public:
    void getDetails() {
        cout << "Enter Product ID: ";
        cin >> id;
        cin.ignore();
        cout << "Enter Product Name: ";
        getline(cin, name);
        cout << "Enter Price: ";
        cin >> price;
        cout << "Enter Quantity: ";
        cin >> quantity;
    }

    float calculateTotalValue() {
        return price * quantity;
    }

    void displayDetails() {
        cout << id << "\t" << name << "\t" << price << "\t" << quantity << "\t" << calculateTotalValue() << endl;
    }
};

int main() {
    int n;
    cout << "Enter total number of products: ";
    cin >> n;

    Product products[n];

    cout << "\n--- Enter Product Details ---" << endl;
    for (int i = 0; i < n; i++) {
        cout << "\nProduct " << (i + 1) << ":" << endl;
        products[i].getDetails();
    }

    cout << "\n--- Product Inventory ---" << endl;
    cout << "ID\tName\tPrice\tQty\tTotal Value" << endl;
    cout << "------------------------------------------" << endl;

    for (int i = 0; i < n; i++) {
        products[i].displayDetails();
    }

    return 0;
}