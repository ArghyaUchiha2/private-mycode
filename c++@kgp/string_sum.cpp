#include<bits/stdc++.h>
using namespace std;
int * add(string s1,string s2,int dot)
{
    int n1=s1.length(),i=0;
    char remainder=0,carry=0;
    string sum;//ekhane initialize korte hoy?
    while(i<dot  && i>=0)
    {
        
        remainder=(((s1[i]-'0')+(s2[i]-'0'))+carry)%10;
        //temp=remainder+carry;//jhemela ekhane
        carry=((s1[i]-'0')+(s2[i]-'0'))/10;
        sum[i]=char(remainder+'0');
        i++;
    }
    while(i>dot && i<n1)
    {
        
        remainder=((s1[i]-'0')+(s2[i]-'0')+carry)%10;
       // temp=remainder+carry;
        //oporer tah thaak comment kora hatateh hobena
        sum[i]=char(remainder+'0');
        carry=((s1[i]-'0')+(s2[i]-'0'))/10;
        i++;
    }
    sum[dot]='.';
    printf("\n%s",sum);//ekhane just check korar jonno print korchi
    return sum;
}
int pointindex(string str,int n)
{

    for(int i=0;i<n;i++)
    {
        if(str[i]=='.')
        {
            return i;
        }
    }

}
int main()
{
    string str1,str2,sumstr;
    cout<<"Enter str1:"<<endl;
    cin>>str1;
    getchar;
    cout<<"Enter str2:"<<endl;
    cin>>str2;
    getchar;
     int index1=pointindex(str1,str1.length()),index2=pointindex(str2,str2.length());
     int dot;//for keeping track of the decimal point after adding zeros
    cout<<"index1: "<<index1<<"\t index2:"<<index2<<endl;
    if(index1>=index2)
    {
        int temp=index1-index2;
        for(int j=0;j<temp;j++)
        {
            str2='0'+str2;
        }
    }
    else
    {
        int temp1=index2-index1;
        for(int j=0;j<temp1;j++)
        {
            str1='0'+str1;
        }
    }
    reverse(str1.begin(),str1.end());
    reverse(str2.begin(),str2.end());
    index1=pointindex(str1,str1.length()),index2=pointindex(str2,str2.length());
    cout<<"index1: "<<index1<<"\tindex2:"<<index2<<endl;
    if(index1>=index2)
    {
        int temp=index1-index2;
        for(int j=0;j<temp;j++)
        {
            str2='0'+str2;
        }
    }
    else
    {
        int temp1=index2-index1;
        for(int j=0;j<temp1;j++)
        {
            str1='0'+str1;
        }
    }
    cout<<str1<<endl<<str2;
    dot=max(index1,index2);
        sumstr=add(str1,str2,dot);
  reverse(sumstr.begin(),sumstr.end());
    cout<<"\n answer : "<<endl;
    cout<<sumstr;
    return 0;
}