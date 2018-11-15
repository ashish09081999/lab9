// This is a library
#include <iostream>
using namespace std;
int countEven(int* q,int size)   //Declaring the function
{
    int count=0;
    for(int i=0;i<size;i++)     //Loop for checking each value
    {
        if(*(q+i)%2==0)         //To check the value is even or odd
        {
            count++;            // total number of even number
        }
    }
    return count;
}
int main()                      //Driver  function
{

    int size;                   //Declaring the variable
    cout<<"Enter size of the array"<<endl;
    cin>>size;                  //Asking for the size of array
    int arr[size];              //Declaring the array of required size
    cout<<"Enter input to array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];            //Asking for the entries of the array
    }
    int* q=&arr[0];             //Point to array
    cout<<"No. of even numbers:"<<countEven(q,size);//call the function
}
