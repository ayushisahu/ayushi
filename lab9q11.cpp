//program to declare variables of all sizes & declare corresponding pointers

#include<iostream>
using namespace std;
int main() {
 
 
//declaring all varibles of predefined sizes
  int a,*a1;
  float b,*b1;
  char c,*c1;
  bool d,*d1;
  double e,*e1;

//assigning variable values
  a=3;
  b=7.24689753;
  c=c;
  d=0;
  e=5.1166;

//assign value to pointers
  a1=&a;
  b1=&b;
  c1=&c;
  d1=&d;
  e1=&e;
//assign size of variables and pointers

cout<<"integer size is"<<sizeof(a1)<<"& int var size is"<<sizeof(a)<<endl;
cout<<"float size is"<<sizeof(b1)<<"& float var size is"<<sizeof(b)<<endl;
cout<<"char size is"<<sizeof(c1)<<"& char var size is"<<sizeof(c)<<endl;
cout<<"bool size is"<<sizeof(d1)<<"& bool var size is"<<sizeof(d)<<endl;
cout<<"double size is"<<sizeof(e1)<<"& double var size is"<<sizeof(e)<<endl;

return 0;
}
  
