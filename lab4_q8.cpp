#include<iostream>
using namespace std;
 
int main()
{
	int mark[5], i;
	float sum=0;
	cout<<"\nEnter marks obtained in Physics, Chemistry, Maths, CS, English :: \n";
	for(i=0; i<5; i++)
	{
	    cout<<"\nEnter mark[ "<<i+1<<" ] :: ";
		cin>>mark[i];
		sum=sum+mark[i];
	}
 
	float avg=sum/5;
	float perc;
	perc=(sum/500)*100;
	cout<<"\nAverage Marks of 5 Subjects = [ "<<avg<<" ] \n";
	cout<<"\nPercentage in 5 Subjects = [ "<<perc<<"% ] \n";
 
	return 0;
}
