//program to find factorial of any number n

#include <iostream>
using namespace std;

int factorial(int);

int main()
{
  int n;
  cout<<"Enter the number to find factorial ";
  cin >> n;
  cout << "the factorial of" << n <<" = "<<factorial(n);  
  return 0;
}
//call back the function
int factorial(int n)
{
  
  if (n>1)
  {return n*factorial(n-1);}
  else
  {return 1;}
}
