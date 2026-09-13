# Unit I

Experiment 1: Student class with details and result calculation

#include <iostream>
#include <string>
using namespace std;

class student
{
private:
    int rollnum;
    string name;
    float marks[3];
    float total;
    float percentage;
    string result;

public:

    void acceptdetails()
    {
        cout << "Enter roll number: ";
        cin >> rollnum;
        cin.ignore();

        cout << "Enter name: ";
        getline(cin, name);

        cout << "Enter marks for 3 subjects: ";
        for (int i = 0; i < 3; i++)
            cin >> marks[i];
    }

    void calculateresult()
    {
        total = 0;

        for (int i = 0; i < 3; i++)
            total += marks[i];

        percentage = total / 3.0;

        if (percentage >= 60)
            result = "First class";
        else if (percentage >= 50)
            result = "Second class";
        else if (percentage >= 40)
            result = "Pass";
        else
            result = "Fail";
    }

    void displaydetails()
    {
        cout << "\n----- Student Details -----" << endl;
        cout << "Roll number: " << rollnum << endl;
        cout << "Name: " << name << endl;

        cout << "Marks: ";
        for (int i = 0; i < 3; i++)
        {
            cout << marks[i] << " ";
        }

        cout << endl;
        cout << "Total marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
        cout << "Result: " << result << endl;
    }
};

int main()
{
    student s;

    s.acceptdetails();
    s.calculateresult();
    s.displaydetails();

    return 0;
}
