#include<iostream>
#include<string>
using namespace std;
class Car
{
public:
string brand;
string model;
string color;
float engine;
int seat;
};
int main()
{
Car Car1;
Car1.brand="toyota";
Car1.model="innova Crysta";
Car1.color="pink";
Car1.engine=2.4;
Car1.seat=7;
}
cout<<Car1.brand<<" "<<Car1.model<<" "<<Car1.color<<" "<<endl;

