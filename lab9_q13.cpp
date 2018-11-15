// This is a library
#include <iostream>
using namespace std;
int main()
{
    int ar[10]={1,2,3,4,5,6,7,8,9,0};       //Creating an array of size 10
    //Print values using normal index method
    cout<<"The values using normal index method"<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<ar[i]<<" ";                  //Printing the values
    }
    cout<<endl<<"The values using pointer method"<<endl;
    //Print values using pointer method
    int* q=&ar[0];
    for(int i=0;i<10;i++)
    {
        cout<<*(q+i)<<" ";               //Printing the values
    }
    return 0;
}
