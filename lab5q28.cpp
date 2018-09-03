//program to find sum of n natural numbers
#include <iostream>
using namespace std;


int main()
{  //declare variables
	int n = 0;
	int j = 0;
	int sum = 0;
	sum = 0;
	j = 2; 
   
	{
		cout << "Enter a number: " ;
		cin >> n;
		sum=0;
	
		for(j=2;j<=n; j+=2)  
    	       {
    		sum += j;    	      
    	       }
		  
    	cout << "the sum of even numbers from 1 to " << n  << " is  " << sum << endl;
		  
	}                     
	return 0;
         }

