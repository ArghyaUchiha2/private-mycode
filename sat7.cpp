#include<iostream>
using namespace std;
int main()
{
    int a=1,b=1,s,n,i;
    cout<<"enter the number of term of fibonacci series ";
    cin>>n;
    cout<<"the fibonacci series up to "<<n<<" is"<<endl;
    cout<<a<<endl<<b<<endl;
    for(i=3;i<=n;i++)
    {
        s=a+b;
        cout<<s<<endl;
        a=b;
        b=s;
    }
    return 0;
}