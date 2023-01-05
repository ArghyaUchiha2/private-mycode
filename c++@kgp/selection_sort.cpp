#include<iostream>
using namespace std;
void printarray(int arr[],int len)
{
    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<endl;
    }
}
void selection_sort(int arr[],int len)
{
    for(int i=0;i<len;i++)
    {
        int i_min=i;
        for(int j=1+i;j<len;j++)
        {
            if(arr[j]<arr[i_min])
            {
                i_min=j;
            }
        }
        swap(arr[i],arr[i_min]);
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
    //sorting the array using selection sort
    selection_sort(arr,n);
    //printing the array
    cout<<"The sorted array is:"<<endl;
    printarray(arr,n);
    return 0;
}