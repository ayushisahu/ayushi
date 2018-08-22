#include<iostream>
using namespace std;
int main (){
float km,met,cent;
cout << " Enter length in cm: ";
cin >> cent;
met = (cent/100);
km = (cent/10000);
cout << " The length in meter is: "<< met << endl;
cout << " The length in km is: "<< km << endl;
return 0;
}

