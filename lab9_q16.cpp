// This is a library
#include <iostream>
using namespace std;
int main()
{
    char ar[20];        //Declaring an array
    char* q;            //Declaring a pointer
    cout<<"Input about 10 characters of string"<<endl;
    cin>>ar;           //Asking for the entries of array
    q=&ar[0];         //Pointer pointing to the array
    //Loop to print values starting from the last term
    for(int i=9;i>=0;i--)
    {
        //Loop to print the values till the last term
        for(int j=i;j<10;j++)
        {
            cout<<*(q+j);
        }
        cout<<endl;//change the row
    }
    return 0;
}
