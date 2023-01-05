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
void merge(int arr[],int low,int mid,int high)
{
    int l_size=mid+1-low,r_size=high-mid;
    int left[l_size],right[r_size];
    for(int g=0;g<l_size;g++)
    {
        left[g]=arr[low+g];
    }
    for(int h=0;h<r_size;h++)
    {
        right[h]=arr[mid+1+h];
    }
    int i=0,j=0,k=low;
    while (i<l_size && j<r_size)
    {
        if(left[i]<right[j])
        {
            arr[k++]=left[i++];
            // i++;
            // k++;
        }
        else
        {
            arr[k++]=right[j++];
            // j++;
            // k++;
        }
    }
    while (i<l_size)
    {
        arr[k]=left[i];
        i++;
        k++;
    }
    while(j<r_size)
    {
        arr[k]=right[j];
        j++;
        k++;
    }
}
void mergesort(int arr[],int low,int high)
{
    if(high<=low)
    {
        return;
    }
    int mid=(low+high)/2;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,low,mid,high);
}
int main()
{
    int arr[]={7,5,1,4,3,2,8,12,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"The given array is:"<<endl;
    printarray(arr,n);
    mergesort(arr,0,n);
    cout<<"The sorted array is:\n";
    printarray(arr,n);
    return 0;
}