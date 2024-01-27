//Check if the given array is sorted or not.

#include<iostream>
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
    
    //Checking  whether sorted or not

    for (int i = 1; i < 5; i++)
    {
        if (arr[i - 1] <= arr[i])
        {
            cout<<"Array is Sorted "<<endl;
            return 0;
        }
        else if (arr[i - 1] > arr[i])
        {
            cout<<"Array is not Sorted "<<endl;
            return 0;
        }
    }
    return 0;
}
