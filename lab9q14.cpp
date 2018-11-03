//string that stores my name in it
#include<iostream>
#include<cstring>
using namespace std;
int main(){
 char name[11] = {'a','y','u','s','h','i','s','a','h','u'};
//printing name by normal index method
 cout<<"my name is ";
 for (int i=0;name[i]!='\0';i++){
 cout<<name[i];}
 cout<<endl;
//printing by pointer method
 char *p,i;
  p=name;
 for(int i=0;*p!='\0';i++)
 {cout<<*p;
  p++;}
 cout<<endl;
return 0;
}
