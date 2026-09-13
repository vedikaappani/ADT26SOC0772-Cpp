# Unit I

Experiment 1: Student class with details and result calculation

#include<iostream>
#include<strig>
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
cout<<"Enter roll number:";
cin>>rollnum;
cin.ignore();
cout<<"Enter namses:";
getline(cin , name);
cout<<"Enter marks for 3 subjects:";
for(int i=0; i<3; i++)
cin>>marks[i];
}
}
void calculateresult ()
{
total=0;
for(int i=0; i<3; i++)
total += marks[i];
}
percentage= total/3.0;
if(percentage >=60) result="First class";
else if(percentage >=50) result="second class";
else if(percentage >=40) result="pass";
else result = "fail";
}
void displaydetails()
{
cout<<"\n-----Student Details-----"<<endl;
cout<<"roll number:"<<rollnum<<endl;
cout<<names:"<<name<<endl;
cout<<"marks:";
for (int =0; i<3; i==)
{
cout<<marks[i]<<" ";
}
cout<<endl;
cout<<"total marks :"<<total<<endl;
cout<<"percentage"<<percentage<<"%"<<endl;
cout<<"result:"<<result<<endl;'
}
};
int main()
student s;
s.acceptdetails();
s.calculateresult();
s.displaydetails)();
return 0;
}
