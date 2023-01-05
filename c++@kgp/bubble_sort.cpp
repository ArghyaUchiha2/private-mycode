#include<iostream>
using namespace std;
//function for printing array
void printarray(int arr[],int len)
{
    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<endl;
    }
}
int main()
{
    int n,i,c,d;
    cout<<"Enter the no of elemenats in the array:";
    cin>>n;
    int arr[n];
    //taking array input
    cout<<"Enter the elements of the array:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //sorting the array
    for(i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    //printing the array
    cout<<"The sorted array is:"<<endl;
    printarray(arr,n);
    return 0;
}