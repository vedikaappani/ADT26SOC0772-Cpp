Experiment 1

#include <iostream>
#include <string>

class Person {
protected:
    std::string name;
    int age;

public:
    Person(std::string n, int a) : name(n), age(a) {}

    void displayPersonInfo() {
        std::cout << "Name: " << name << ", Age: " << age << "\n";
    }
};

class Student : public Person {
private:
    int studentId;

public:
    Student(std::string n, int a, int id) : Person(n, a), studentId(id) {}

    void displayStudentInfo() {
        displayPersonInfo();
        std::cout << "Student ID: " << studentId << "\n";
    }
};

class Vehicle {
protected:
    std::string brand;

public:
    Vehicle(std::string b) : brand(b) {}

    void displayVehicleInfo() {
        std::cout << "Brand: " << brand << "\n";
    }
};

class Car : public Vehicle {
protected:
    int seatingCapacity;

public:
    Car(std::string b, int cap) : Vehicle(b), seatingCapacity(cap) {}

    void displayCarInfo() {
        displayVehicleInfo();
        std::cout << "Seating Capacity: " << seatingCapacity << "\n";
    }
};

class ElectricCar : public Car {
private:
    int batteryCapacity;

public:
    ElectricCar(std::string b, int cap, int bat) : Car(b, cap), batteryCapacity(bat) {}

    void displayElectricCarInfo() {
        displayCarInfo();
        std::cout << "Battery Capacity: " << batteryCapacity << " kWh\n";
    }
};

int main() {
    std::cout << "--- Single Inheritance (Person -> Student) ---\n";
    Student student("Amit", 20, 101);
    student.displayStudentInfo();
    std::cout << "\n";

    std::cout << "--- Multilevel Inheritance (Vehicle -> Car -> ElectricCar) ---\n";
    ElectricCar myEV("Tata", 5, 40);
    myEV.displayElectricCarInfo();

    return 0;
}
