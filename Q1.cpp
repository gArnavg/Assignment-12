//Count the number of elements strictly greater than x.
#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter the number";
    cin>>x;
    int ans;
    int a[5];
    cout<<"Enter the elements : ";
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
        int ans=0;
    }
    for(int i = 0;i<5;i++)
    {
        if(a[i] > x)
        {
        ans++;
        }
    }
    cout<<ans;
    return 0;
}
