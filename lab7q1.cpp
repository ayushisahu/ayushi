//program to find power of any  number using recursion

#include<iostream>
using namespace std;

int findpower(int, int);

int main()
{ 
  int base, powerRaised, result;
  
  cout<<"Enter the base number:";
  cin>>base;
  
  cout<<"enter the power number(positive integer)";
  cin>>powerRaised;
  
  result= findpower(base, powerRaised);
  cout<< base << "^" << powerRaised << " = " << result;
  
  return 0;
}

int findpower(int base , int powerRaised)
{ 
  if (powerRaised !=0)
  return (base*findpower(base, powerRaised-1));
  else 
  return 1;
}
