#include<iostream>
using namespace std;
int main()
{
int a,b,c=0;
cout<<"enter values for a and b:";
cin>>a>>b;
cout<<"before swapping:"<<"a="<<a<<"b="<<b<<endl;
c=a;
a=b;
b=c;
cout<<"after swapping"<<"a="<<a<<endl;
cout<<"b="<<b<<endl;
return 0;
}
