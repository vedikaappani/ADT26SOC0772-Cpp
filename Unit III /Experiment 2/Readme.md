Experiment 2

#include <iostream>
#include <string>

class PersonalDetails {
protected:
    std::string name;
    int age;

public:
    PersonalDetails(std::string n, int a) : name(n), age(a) {}

    void displayPersonal() {
        std::cout << "Name: " << name << "\nAge: " << age << "\n";
    }
};

class SalaryDetails {
protected:
    double basicSalary;

public:
    SalaryDetails(double salary) : basicSalary(salary) {}

    void displaySalary() {
        std::cout << "Salary: ₹" << basicSalary << "\n";
    }
};

class Employee : public PersonalDetails, public SalaryDetails {
private:
    int employeeId;

public:
    Employee(std::string n, int a, double s, int id) 
        : PersonalDetails(n, a), SalaryDetails(s), employeeId(id) {}

    void displayEmployeeInfo() {
        std::cout << "Employee ID: " << employeeId << "\n";
        displayPersonal();
        displaySalary();
    }
};

class Shape {
protected:
    std::string shapeType;

public:
    Shape(std::string type) : shapeType(type) {}

    void displayType() {
        std::cout << "Shape Type: " << shapeType << "\n";
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : Shape("Circle"), radius(r) {}

    void calculateArea() {
        displayType();
        std::cout << "Area of Circle: " << (3.14159 * radius * radius) << "\n";
    }
};

class Rectangle : public Shape {
private:
    double length;
    double breadth;

public:
    Rectangle(double l, double b) : Shape("Rectangle"), length(l), breadth(b) {}

    void calculateArea() {
        displayType();
        std::cout << "Area of Rectangle: " << (length * breadth) << "\n";
    }
};

int main() {
    std::cout << "--- Multiple Inheritance (PersonalDetails + SalaryDetails -> Employee) ---\n";
    Employee emp("Rohan", 28, 75000.0, 1001);
    emp.displayEmployeeInfo();
    std::cout << "\n";

    std::cout << "--- Hierarchical Inheritance (Shape -> Circle / Rectangle) ---\n";
    Circle circle(5.0);
    circle.calculateArea();
    std::cout << "\n";

    Rectangle rect(4.0, 6.0);
    rect.calculateArea();

    return 0;
}
