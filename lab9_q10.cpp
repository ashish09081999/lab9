// This is a library
#include <iostream>
using namespace std;
void revtString(char* q)           //Declaring a function which returns nothing
{
    int end;
    int count=0;                       //Initializing the count
    for(int i=0;(*(q+i))!='\0';i++)    //Loop to count the size of array
    {
        count++;
    }
    end=count-1;
    for(int i=end;i>=0;i--)           //Loop to print values from the last term
    {
        cout<<*(q+i);
    }
}
int main()
{
    int size;
    cout<<"Enter max size"<<endl;
    cin>>size;                     //Asking for the size of the array
    char arr[size];               //Declare array with given size
    cout<<"Enter input to array"<<endl;
    cin>>arr;                      //Asking the user for the inputs to the array

    char* p=&arr[0];               //Declaring the pointer
    revtString(p);                 //Calling the function
    return 0;
}
