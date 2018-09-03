//program to find summ of all odd no. between 1-n or any given range
#include <iostream>
using namespace std;

int main(){
//declare variables
    int number;
    int min,max;
    long sum =0;
 
    cout << "Enter the minimum range: ";
    cin >> min;

    cout << "Enter the maximum range: ";
    cin >> max;

    for(number = min;number <= max; number++)
         if(number % 2 !=0)
             sum = sum + number;

    cout << "Sum of odd numbers in given range is: " << sum;
 
    return 0;}
