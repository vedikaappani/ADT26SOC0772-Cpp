# Unit 2


# Experiment 1: Employee class with construtors 

#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int empId;
    string name;
    float basicSalary;
    float bonus;
    float totalSalary;

public:
    // Default Constructor
    Employee() : empId(0), name("Unknown"), basicSalary(0), bonus(0), totalSalary(0) {
        cout << "Default constructor called" << endl;
    }

    // Parameterized Constructor
    Employee(int id, string n, float salary, float b) {
        empId = id;
        name = n;
        basicSalary = salary;
        bonus = b;
        calculateTotalSalary();
        cout << "Parameterized constructor called" << endl;
    }

    // Member Function to calculate total salary
    void calculateTotalSalary() {
        totalSalary = basicSalary + bonus;
    }

    // Display Function
    void display() const {
        cout << "Employee ID: " << empId << endl;
        cout << "Name: " << name << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Total Salary: " << totalSalary << endl;
    }
};

int main() {
    // Creating object using default constructor
    Employee emp1;
    emp1.display();

    // Creating object using parameterized constructor
    Employee emp2(101, "John Doe", 50000, 10000);
    emp2.display();

    return 0;
}


# Experiment 2: Book class with copy constructor 

#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    int bookId;
    string title;
    string author;
    float price;
    static int bookCount;

public:
    // Parameterized Constructor with Default Arguments
    Book(int id = 0, string t = "Unknown", string a = "Unknown", float p = 0.0) {
        bookId = id;
        title = t;
        author = a;
        price = p;
        bookCount++;
        cout << "Book created. Total books: " << bookCount << endl;
    }

    // Copy Constructor
    Book(const Book &b) {
        bookId = b.bookId;
        title = b.title;
        author = b.author;
        price = b.price;
        bookCount++;
        cout << "Book copied. Total books: " << bookCount << endl;
    }

    // Destructor
    ~Book() {
        bookCount--;
        cout << "Book destroyed. Total books: " << bookCount << endl;
    }

    // Display Function
    void display() const {
        cout << "Book ID: " << bookId << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }

    // Static Member Function
    static int getBookCount() {
        return bookCount;
    }
};

// Initializing static data member
int Book::bookCount = 0;

int main() {
    Book b1(101, "C++ Programming", "Bjarne Stroustrup", 4500);
    b1.display();

    Book b2(b1);
    b2.display();

    cout << "Total books: " << Book::getBookCount() << endl;
    return 0;
}