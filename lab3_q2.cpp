//First include the library
#include<iostream>
using namespace std;
//write the main function
int main () {
//declare variables
int a,b ;
int sum,diff,mult,div,mod;
a = 4;
b = 2;
//process
sum = a + b;
diff = a - b;
mult = a * b;
div = a / b;
mod = a % b;
//print out the result
cout << "sum of a and b is" << sum << endl;
cout << "diff of a and b is" << diff << endl;
cout << "mult of a and b is" << mult << endl;
cout << "div of a and b is" << div << endl;
cout << "mod of a and b is" << mod << endl;
return 0;
}

