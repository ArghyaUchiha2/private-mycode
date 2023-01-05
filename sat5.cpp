#include<iostream>
using namespace std;
int main()
{
    int i,j,k,l,n;
    cout<<"enter the given number";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++)
            {
                for(l=0;l<n;l++)
               { if(n==i*i+j*j+k*k+l*l)
                {
                    cout<<i*i<<"+"<<j*j<<"+"<<k*k<<"+"<<l*l<<endl;
                    goto end;
                }
                }
            }
        }
    }
    end:
    return 0;
}