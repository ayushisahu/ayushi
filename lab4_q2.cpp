#include<iostream>
using namespace std;
int main (){
float celsius,fahrenheit;
cout << "Enter the temperature in celsius: ";
cin >> celsius;
fahrenheit = (celsius * 9) / 5 + 32;
cout << "The temperature in  Celsius : " << celsius << endl;
cout << "The temperature in fahrenheit : " << fahrenheit << endl;
return 0;
}
