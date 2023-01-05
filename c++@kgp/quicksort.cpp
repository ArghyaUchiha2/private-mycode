#include<iostream>
using namespace std;
int partition(int arr[],int start,int end)
{
    int pivot=arr[end];
    int p=start;
    for(int i=start;i<end;i++)
    {
        if(arr[i]<=pivot)
        {
            swap(arr[p],arr[i]);
            p++;
        }
    }
    swap(arr[p],arr[end]);
    return p;
}
void quicksort(int arr[],int start,int end)
{
    if(start>=end)
    {
        return;
    }
    int p=partition(arr,start,end);
    quicksort(arr,0,p-1);
    quicksort(arr,p+1,end);
}
int main()
{
    int arr[]={35,745,4,457,23,57,1};
    int len= sizeof(arr)/sizeof(arr[0]);
    quicksort(arr,0,len-1);
    cout<<"Sorted arr:"<<endl;
    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}