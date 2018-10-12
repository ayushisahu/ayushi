//program to find sum of all elements of an array using functions
//first include library
#include<iostream>
using namespace std;

int f1(int arr[],int n){
    for(int i=0;i<n;i++)
    {arr[i]=i;}
return 0;
}

int f2(int arr[],int n){
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
return 0;
}
  
//printing of sum array
int f3(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++)
    sum =sum+arr[i];
    cout<<"sum of elements of array"<<sum<<endl;
return 0;
}

//declaring main function
int main()
 {
  int n,i,sum=0;
//asking for input to array
   cout<<"enter number";
//get input
   cin>>n;
   int arr[n];
//declared array
   f1(arr,n);
//printed array
   f2(arr,n);
   cout<<endl;
//code to find sum of array elements
   f3(arr,n);
return 0;
}
 
