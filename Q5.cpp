//Given an array of integers, change the value of all odd indexed elements to its second multiple and increment all even indexed values by 10.

#include <iostream>
using namespace std;
int main()
{
    //Inserting Array
    int arr[5] ;
    cout<<"Enter 5 elements for the array"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }

    //task
    for(int i=0;i<5;i++)
    {
        if(i%2==0)
        {
            arr[i]+=10;
        }
        else
        {
           arr[i]=2*arr[i]; 
        }
        cout<<arr[i]<<" ";
    }
    return 0;
}
