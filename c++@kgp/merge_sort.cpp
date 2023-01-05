
#include<iostream>
using namespace std;
void merge(int arr[],int low,int high, int mid)
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
    int j=0,k=low,i=0;
    while(i<l_size && j<r_size)
    {
        if(left[i]<right[j])
        {
            arr[k]=left[i];
            i++;
        }
        else{
            arr[k]=right[j];
            j++;
        }
        k++;
    }
    while(i<l_size)
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
void merge_sort(int arr[],int low, int high)
{
    if(low>=high)
    {
        return;
    }
    int mid=(high+low)/2;
    merge_sort(arr,low,mid);
    merge_sort(arr,mid+1,high);
    merge(arr,low,high,mid);
}
int main()
{
    int arr[]={32,745,142,5,325,54};
    int length=sizeof(arr)/sizeof(arr[0]);
    merge_sort(arr,0,length-1);
    cout<<"The sorted array is:"<<endl;
    for (int i = 0; i < length; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}