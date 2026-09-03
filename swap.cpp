#include<iostream>
using namespace std;
int main()
{
int a,b,c=0;
cout<<"enter values for a and b:";
cin>>a>>b;
cout<<"before swapping:"<<endl;
c=a;
a=b;
b=c;
cout<<"a="<<a<<endl;
cout<<"b="<<b<<endl;
return 0;
}
