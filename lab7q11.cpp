//to find HCF of two no. using recursion
#include <iostream>
using namespace std;

//declaration of recusive function
int hcf(int n1, int n2);

int main()
{
   int n1, n2;

   cout << "Enter two positive integers: ";
   cin >> n1 >> n2;

   cout << "H.C.F of " << n1 << " & " <<  n2 << " is: " << hcf(n1, n2);

   return 0;
}

//call back of recursive function
int hcf(int n1, int n2)
{
    if (n2 != 0)
       return hcf(n2, n1 % n2);
    else 
       return n1;
}
