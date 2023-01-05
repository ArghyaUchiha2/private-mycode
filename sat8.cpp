#include<iostream>
using namespace std;
int main()
{
    int n,i,l=0;
    cout<<"enter the size of array ";
    cin>>n;
    int ar[n];
    for(i=0;i<n;i++)
      cin>>ar[i];
    int min=ar[0];
    for(i=1;i<n;i++)
    {
        if(ar[i]<ar[0])
        {
            min=ar[i];
            l=i+1;      
        }
    }
    cout<<"min ele is "<<min<<"  position is "<<l<<endl;
    return 0;

}