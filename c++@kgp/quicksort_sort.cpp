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
int partition(int arr[],int start,int end)
{
    int pivot=arr[end];
    int p=start;
    for(int i=start;i<end;i++)
    {
        if(arr[i]<pivot)
        {
            int temp=arr[p];
            arr[p]=arr[i];
            arr[i]=temp;
            p++;
        }
    }
    int t2=arr[p];
    arr[p]=arr[end];
    arr[end]=t2;
    return p;
}
void quicksort(int arr[],int start,int end)
{
    if(start>=end)
    {
        return;
    }
    int p=partition(arr,start,end);
    quicksort(arr,start,p-1);
    quicksort(arr,p+1,end);
}
int main()
{
    int arr[]={7,5,1,4,3,2,8,12,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"The given array is:"<<endl;
    printarray(arr,n);
    quicksort(arr,0,n);
    cout<<"The sorted array is:\n";
    printarray(arr,n);
    return 0;
}