//make your own function
#include<iostream>
using namespace std;
int sum(int a,int b){
    int sum=a+b;
    return sum;}
    
int main(){
//declare the variables
    int a,b;
   
    cout<<"enter first number";
    cin>>a;
    cout<<"enter second number";
    cin>>b;
    cout<<sum(a,b)<< endl;
return 0;
}
