/* C program to print all alphabets using while loop*/

#include <iostream>
using namespace std;
int main()
{
    char ch = 'a';

    cout<<("Alphabets from a - z are: \n");
    while(ch<='z')
    {
        cout<<("%c\n", ch);
        ch++;
    }

    return 0;
}
