//swapping of 2 numbers

#include<iostream>
using namespace std;
int main()
{
  int a,b;
cout<<"enter values for a and b:";
cin>>a>>b;
cout<<"before swapping"<<a<<"\t"<<b<<endl;
int c;
c=a;
a=b;
b=c;
cout<<"after swapping"<<a<<"\t"<<b<<endl;
return 0;
}

//output
enter values for a and b: 10 20
  before swapping 10 20
after swapping 20 10
