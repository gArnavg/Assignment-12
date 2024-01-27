//Find the difference between the sum of elements at even indices to the sum of elements at odd indices.
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
    int even = 0;
    int odd = 0;

    for(int i = 0; i<5; i++)
    {
        if(i%2==0)
        {
            even+=arr[i];
        }
        else
        {
            odd+=arr[i];
        }
    }
    cout<<abs(even-odd);
    return 0;
}
