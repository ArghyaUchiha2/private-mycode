#include<iostream>
using namespace std;
int max(int arr[],int len)
{
    int max=-1;
    for (int i = 0; i < len; i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    return max;
}
void count_sort(int arr[],int len)
{
    int i,j;
    int m=max(arr,len);
    int count[m+1]={0};
    for(i=0;i<len;i++)
    {
        count[arr[i]]++;
    }
    i=0,j=0;
    while (i<=m)
    {
        if(count[i]>0)
        {
            arr[j]=i;
            count[i]--;
            j++;
        }
        else
        {
            i++;
        }
    }
    
}
void printarray(int arr[],int len)
{
    for (int i = 0; i < len; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[]={5,1,4,8,3,5,2,8,3,9,2,4,7,2,5,7,4,1,8,5,9};
    int len=sizeof(arr)/sizeof(arr[0]);
    printarray(arr,len);
    count_sort(arr, len);
    printarray(arr, len);
    return 0;
}