#include<bits/stdc++.h>
using namespace std;
void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void insertionsort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int hole=i;
        int value=arr[hole];
        while(hole>0 && arr[hole-1]>value)
        {
            arr[hole]=arr[hole-1];
            hole--;
        }
        arr[hole]=value;
    }
}
int main()
{
    int arr[]={7,5,2,8,1,4,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"The given array is:"<<endl;
    printarray(arr,n);
    insertionsort(arr,n);
    cout<<"The sorted array is:\n";
    printarray(arr,n);
    return 0;
}