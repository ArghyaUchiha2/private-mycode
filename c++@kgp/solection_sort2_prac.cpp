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
void selectionsort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int i_min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i_min])
            {
                i_min=j;
            }
        }
        int temp=arr[i_min];
        arr[i_min]=arr[i];
        arr[i]=temp;
    }
}
int main()
{
    int arr[]={7,5,2,8,1,4,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"The given array is:"<<endl;
    printarray(arr,n);
    selectionsort(arr,n);
    cout<<"The sorted array is:\n";
    printarray(arr,n);
    return 0;
}