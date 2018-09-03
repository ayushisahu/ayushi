/* C program to check divisibility of any number by 5 and 11 */

#include <iostream>
using namespace std;
int main()
{//declare variable
    int n;

    /* Input number from user */
    cout<<"Enter any number: "<<endl;
    cin>>n;


    /*
      If  n modulo division 5 is 0 
      and n modulo division 11 is 0 then
      the n is divisible by 5 and 11 both
     */
    if((n % 5 == 0)and(n % 11 == 0))
    {
        cout<<"Number is divisible by 5 & 11";
    }
    else
    {
        cout<<"Number is not divisible by 5 & 11";
    }
return 0;}
