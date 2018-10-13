//c++ program to find mean and median of an array
//include library
#include<iostream>
using namespace std;

//function to find mean
double findMean(int a[],int n)
{
 int sum=0;
    for (int i=0;i < n; i++)
    sum +=a[i];
   return (double)sum/(double)n;
}

//function to find median
double findMedian(int a[],int n)
{

//check for even case 
 if (n % 2 != 0) 
       return (double)a[n/2]; 
      
    return (double)(a[(n-1)/2] + a[n/2])/2.0; 
} 
  
// Driver program 
int main() 
{ 
    int a[]={1,2,3,4,5,6,7,8}; 
    int n = sizeof(a)/sizeof(a[0]); 
    cout << "Mean = " << findMean(a, n) << endl;  
    cout << "Median = " << findMedian(a, n) << endl;  
    return 0; 
} 
 
    
