#include<iostream>
using namespace std;
int main()
{
    int a,b,temp,min;
    cout<<"Enter the two integers:";
    cin>>a>>b;
    if(a<=b)
    min=a;
    else
    min=b;
    for(int i=1;i<=min;i++)
    {
        if(a%i==0 && b%i==0)
        {
            temp=i;
        }
    }
    cout<<"The gcd of the given two numbers is:"<<temp;
    return 0;
}