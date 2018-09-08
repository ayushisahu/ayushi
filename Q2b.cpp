//program with a function to take 2 parameters,adds them and gives sum
#include<iostream>
using namespace std;

/*
Write a program with a function that takes two int parameter and add them together and then returns the sum
*/

int sum(int a, int b){
	int sum = a+b;
	return sum;
}

/*
Same stuff, but func should be void, and takes a third passed by ref and then puts sum in that.
*/

void sumR(int a, int b, int &c){
	c = a+ b;
}


/*
The program tshould ask the user for 2 nos and call the func with the number as argument and tell the user sum. 
*/
int main(){
        int a,b;
	cout<<"enter first number";
	cin>>a;
    	cout<<"enter second number";
    	cin>>b;
	cout <<sum(a,b);
	sum(a,b);
	cout << sum<<endl;


}


