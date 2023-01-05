#include<iostream>
#include<algorithm>
using namespace std;
int binary_search(int arr[],int low,int high,int c)
{
    while(low<=high)
    {
    int mid=(low+high)/2;
        if(arr[mid]==c)
        {
            return 1;
            break;
        }
        else if(arr[mid]>c)
        {
            binary_search(arr,low,mid-1,c);   
        }
        else if(arr[mid]<c)
        {
            binary_search(arr,mid+1,high,c);   
        }
        return 0;
    }
}
int main()
{
    int n,i,c,d;
    cout<<"Enter the no of elemenats in the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<"Enter the value of the number which your want to  check:";
    cin>>c;
    d=binary_search(arr,0,n-1,c);
    if (d==1)
    {
        cout<<c<<" is present in the array";
    }
    else if(d==2)
    {
        cout<<c<<" is not present in the array";
    }
    return 0;
}