//program to find reverse of any number using recursion
#include <iostream>
using namespace std;

//declaration of recursive function
void reverse(const string& a);

int main()
{
    string str;
    cout << " Please enter a string " << endl;
    getline(cin, str);
    reverse(str);
    return 0;    
}

//call back the recursive function
void reverse(const string& str)
{
    size_t numOfChars = str.size();

    if(numOfChars == 1)
       cout << str << endl;
    else
    {
       cout << str[numOfChars - 1];
       reverse(str.substr(0, numOfChars - 1));
    }
}


