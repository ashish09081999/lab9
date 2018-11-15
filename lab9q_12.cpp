//This is a library
#include <iostream>
using namespace std;

int main()      //Driver function
{
    //Declare variables and pointer
    int a,b;
    int* p=&a;              //Pointer p points to a
    cout<<"Enter the entries a and b"<<endl;
    cin>>a;
    cin>>b;                         //Asking the user for a and b
    b=*p;                          //Assigning value of *p to b
    cout<<"a="<<a<<" b="<<b<<" *p="<<*p<<endl;   //Printing a,b,*p
    a=2,b=3;                       //Assigning value to variables a and b
    cout<<"a="<<a<<" b="<<b<<" *p="<<*p<<endl;     //Printing a,b,*p
    p=&b;                          //Pointing p to b
    cout<<"a="<<a<<" b="<<b<<" *p="<<*p;        //Printing all
    return 0;
}
