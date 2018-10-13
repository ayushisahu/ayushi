//program to find largest and smallest no. using arrays
//include library
#include<iostream>
using namespace std;
//start of main function
int main()
{

    //declare array
    int values[10];
    int largest,smallest;// Declare integer
    largest=smallest=values[0];// Assigns element to be highest or lowest valu
 
      for(int i = 0;i < 10; i++)
       {cout <<"enter no.:"<<i<< ":";
        cin >>values[i];}
          
      for(int i = 0;i < 10; i++)// Works out the biggest number
       { if (values[i]>largest)// Compare biggest value with current element
        {
          largest=values[i];
        }
       } 

      for(int i=0;i < 10; i++)// Works out the smallest number
       {
         if (i<smallest)//compare smallest with current element
        {
          smallest=values[i];
        }
       }

        cout<<"largest no. is"<< largest <<":"<<endl;//printing of output
        cout<<"smallest no. is"<< smallest <<":"<<endl;
return 0;
} 

