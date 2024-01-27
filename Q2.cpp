//WAP to find the largest three elements in the array.
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

    //Finding largest 3

    int m1,m2,m3;
    m3 = m2 = m1 = arr[0];

    for(int i = 0;i<5;i++)
    {
        if(arr[i] > m1)
        {
            m3 = m2;
            m2 = m1;
            m1 = arr[i];
        }
        else if (arr[i] > m2)
        {
            m3 = m2;
            m2 = arr[i];
        }
        else if (arr[i] > m3)
        {   
            m3 = arr[i];
        }
    }

    cout<<endl<<"Three largest elements of the array are "<<m1<<", "<<m2<<","<<m3;  
    return 0;  
}
