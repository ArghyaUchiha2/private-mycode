#include<iostream>
using namespace std;
void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void heapify(int arr[],int n,int i)
{
    int largest=i;
    int l=2*i+1;
    int r=2*i+2;
    if(l<n && arr[l]>arr[largest])
    {
        swap(arr[l],arr[largest]);
        largest=l;
    }
    if(r<n && arr[r]>arr[largest])
    {
        swap(arr[r],arr[largest]);
        largest=r;
    }
    if(largest!=i)
    {
        heapify(arr,n,largest);
    }
}
void heapsort(int arr[],int n)
{
    for(int i=(n/2)-1;i>=0;i--)
    {
        heapify(arr,n,i);
    }
    for(int i=n-1;i>=0;i--)
    {
        swap(arr[i],arr[0]);
        heapify(arr,i,0);
    }
}
int main()
{
    int arr[]={7,5,1,4,3,2,8,12,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"The given array is:"<<endl;
    printarray(arr,n);
    heapsort(arr,n);
    cout<<"The sorted array is:\n";
    printarray(arr,n);
    return 0;
}