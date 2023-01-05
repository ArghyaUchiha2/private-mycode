#include<iostream>       //kth largest element 
using namespace std;
int main()
{
int n,i,j,k;
cout<<"enter the size of array ";
cin>>n;
int a[n];
cout<<"unsortet array is given bellow"<<endl;
for(i=0;i<n;i++)

    cin>>a[i];
cout<<"  enter the k-th position :"<<endl;

cin>>k;
for(i=0;i<k;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(a[i]>a[j])
        {
            int temp=a[i];
            a[i]=a[j];
        
            a[j]=temp;

        }
    }
}

cout<<"the kth largest element is :"<<a[k-1]<<endl;
return 0;


}