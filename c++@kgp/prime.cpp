#include<iostream>
using namespace std;
int main()
{
    int a,temp=0;
    cout<<"enter the integers:";
    cin>>a;
    if(a<=1)
    {
        cout<<"the given integer is not prime"<<endl;
    }
    else{
        for(int i=2;i<a;i++)
        {
            if(a%i==0)
            {
                temp=1;
                break;
            }
        }
        if(temp==0)
        cout<<"the given integer is a prime";
        else
        cout<<"the given integer is not a prime";
        return 0;
    }
}