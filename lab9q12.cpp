#include <iostream>
using namespace std;
int main(){
//declare variables a,b and pointer  *p of type int

int a,b,*p;

a=2;b=3;

//point p to a

p=&a;

//point value pointed by p in b

b=*p;

//print values of a,b,*p

cout<<"a="<<a<<endl;
cout<<"b="<<b<<endl;
cout<<"p="<<p<<endl;

//point p to b
p=&b;

//point value pointed by p in a
a=*p;

//print result
cout<<"a="<<a<<endl;
cout<<"b="<<b<<endl;
cout<<"p="<<p<<endl;
return 0;
}
