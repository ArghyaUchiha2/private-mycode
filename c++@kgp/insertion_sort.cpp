#include<iostream>
using namespace std;
void printarray(int arr[],int len)
{
    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<endl;
    }
}
void insertion_sort(int arr[],int len)
{
    for(int i=1;i<len;i++)
    {
        int hole=i;
        int value=arr[hole];
        while(hole>0 && arr[hole-1]>value)
        {
                arr[hole]=arr[hole-1];
                hole=hole-1;
        }
        arr[hole]=value;
    }
}
int main()
{
    int n,i;
    cout<<"Enter the no of elements in the array:";
    cin>>n;
    int arr[n];
    //taking array input
    cout<<"Enter the elements of the array:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //sorting the array using insertion sort
    insertion_sort(arr,n);
    //printing the sorted array
    cout<<"The sorted array is:"<<endl;
    printarray(arr,n);
    return 0;
}