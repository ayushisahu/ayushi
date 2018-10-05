//program to find sum of digits of given no.using recursion
#include <iostream>
using namespace std;

//declaration of recursive function
int sumOfDigits(int n)
{ 
  if(n==0)
  {
   return 0;
  }
  else
  {
   return (n%10) + sumOfDigits(n/10);
  }
}

int main()
{
 int num;
 
 cout<<"ENTER NUMBER: ";
 cin>>num;
 
 cout<<"SUM OF DIGITS: "<<sumOfDigits(num);
 
 return 0;
}
