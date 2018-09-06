
//first include the library
#include<iostream>
using namespace std;
int main(){
//declare the variables
     int n=5;
//use for loop
     for (int i = 0 ;i < n ; i++){
	    //print stars for 1st,2nd,last row
	     if(i == 0 || i == 1 || i == (n-1)){
		 for (int j = 0 ; j< (i+1); j++){
		 	cout<<"*";
		 }
	     }
	     else {
		   cout<<"*";
		  //printing space
		  for (int j = 0; j < (i-1); j++){
			cout<<" ";
		  }
		  //print star
		  cout << "*";
		  
	     }
      cout<< endl;
    }
	
  return 0;
}
