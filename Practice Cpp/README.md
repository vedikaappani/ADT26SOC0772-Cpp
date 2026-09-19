practice cpp

1. Hello world 

#include<iostream>
using namepace std;
int main()
{
cout<<"hello world";
return 0;
}

2. addition

#include<iostream>
using namespace std;
int main()
{
int a,b,sum;
cout<<"enter value for a and b:";
cin>>a>>b;
sum=a+b;
cout<<"sum of this is:"<<sum;
return 0;
}

3. swapping 

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

4. car

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

cout<<Car1.brand<<" "<<Car1.model<<" "<<Car1.color<<" "<<endl;
return 0;
}

5. profile

#include<iostream>
using namespace std;
int main()
{
cout<<"vedika\n";
cout<<"44\n";
cout<<"SOC 16\n";
cout<<"B\n";
return 0;
}