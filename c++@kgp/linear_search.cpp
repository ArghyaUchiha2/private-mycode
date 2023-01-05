#include<iostream>
using namespace std;
int main()
{
    int n,i,c;
    cout<<"Enter the no of elements of the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array:";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the value of the element which you want to check:";
    cin>>c;
    for(i=0;i<n;i++)
    {
        if(c==arr[i])
        {
            cout<<c<<" is present in the given array.";
            goto end;
        }
    }
    cout<<c<<" is not present in the array.";
    end:
    return 0;
}