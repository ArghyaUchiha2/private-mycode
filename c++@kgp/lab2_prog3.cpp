#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter the no of elements of the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<"The greatest element of the array is: "<<max<<endl;
    return 0;
}