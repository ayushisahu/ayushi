//program to find minimum between two numbers
//include library
#include<iostream>
using namespace std;
int min(int a,int b){
   if (a<b)
   return a;
   else if (a==b)
   cout<<"both are equal"<<endl;
   else(a>b);
   return b;}
//define the driver function
int main(){
   int a,b;{
   cout<<"input first no.";
   cin>>a;
   cout<<"input second no.";
   cin>>b;
   cout<<min(a,b)<<endl;
   }
return 0;}
   
