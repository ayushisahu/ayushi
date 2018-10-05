 //program to print all even/odd no.in given range using recursion  
 #include <iostream>
 using namespace std;
     
 // Function declaration
    void printevenodd(int start, int limit);
     
    int main()
    {
        int lowerLimit, upperLimit;
     
// Input lower and upper limit from user
    cout<<"Enter lower limit: ";
    cin>>lowerLimit;
    cout<<"Enter upper limit: ";
    cin>>upperLimit;
    cout<<"Even/odd Numbers from "<<lowerLimit <<" to    "<<upperLimit<<endl;
        printevenodd(lowerLimit, upperLimit);
     
        return 0;
    }
     
     
//Recursive function to print even or odd numbers in a given range.
     
    void printevenodd(int start, int limit)
    {
        if(start > limit)
            return;
     
        cout<<start<<endl;
     
// Recursive call to printevenodd to get next value
        printevenodd(start + 2, limit);
    }
