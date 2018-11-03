//create array of size 10 & use loop to point array using normal index method and pointer method
#include <iostream>
using namespace std;
int main(){
//declare array
int arr[10]={1,2,3,4,5,6,7,8,9,10};
//printing by pointer method
int *p,i;
p = arr;
  
    for(i=0;i<10;i++){
    cout<<*p;
    p++;
    cout<<endl;
}
//printing by normal index method
cout<<"array's first element="<<arr[0]<<endl;
cout<<"array's second element="<<arr[1]<<endl;
cout<<"array's third element="<<arr[2]<<endl;
cout<<"array's fourth element="<<arr[3]<<endl;
cout<<"array's fifth element="<<arr[4]<<endl;
cout<<"array's sixth element="<<arr[5]<<endl;
cout<<"array's seventh element="<<arr[6]<<endl;
cout<<"array's eighth element="<<arr[7]<<endl;
cout<<"array's ninth element="<<arr[8]<<endl;
cout<<"array's tenth element="<<arr[9]<<endl;
return 0;
}
