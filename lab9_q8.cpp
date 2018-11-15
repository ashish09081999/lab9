// This is a library
#include <iostream>
using namespace std;
int myStrLen(char* q)            //Declaring the function for strlen
{
    int count=0;                 //Initializing the count
    for(int i=0;*(q+i)!='\0';i++) //Loop for counting the length
    {
        count++;
    }
    return count;
}
int main()
{
    int size;
    cout<<"Enter max size of array"<< endl;
    cin>>size;                       //Asking for the size of array
    char arr[size];                  //Declaring the array of max size
    cout<<"Enter the string:"<<endl;
    cin>>arr;                        //Asking the user for the string
    char* q=&arr[0];                   //point to array
    cout<<"Length of the string:"<<myStrLen(q);//call the function
    return 0;
}
