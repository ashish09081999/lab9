// This is a library
#include <iostream>
using namespace std;
int main()             //Driver function
{
    char arr[20];       //Declaring an array of size 20
    cout<<"Enter your name:"<<endl;
    cin.getline(arr,20);
    //Print string character by  using normal index method
    cout<<"Using normal index method"<<endl;
    for(int i=0;i<20;i++)     //Writing a loop for all the entries
    {
        cout<<arr[i];
    }
    cout<<endl<<"Using pointer method"<<endl;
    //Print string character by using pointer method
    char* p=&arr[0];
    for(int i=0;i<20;i++)     //Writing a loop for all the entries
    {
        cout<<*(p+i);
    }
    return 0;
}
