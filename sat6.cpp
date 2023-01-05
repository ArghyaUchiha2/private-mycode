#include<iostream>
using namespace std;
int main()
{
    int i,s=0,n;
    cout<<"enter the number "<<endl;
    cin>>n;
    for(i=1;i<n;i++)
    {
     if(n%i==0)
       s=s+i;
    }
    cout<<s;
    if(s==n)
      cout<<"number is perfect"<<endl;
    else
    cout<<"number is not perfect"<<endl;
 return 0; 
}