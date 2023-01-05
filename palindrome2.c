#include<stdio.h>
int ispalindrome(int n)
{
    int k=n,sum=0;
    while (n>0)
    {
        int r;
        r=n%10;
        sum=sum*10+r;
        n/=10;
    }
    if (sum==k)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
    
    
}
int main()
{
    int n;
    printf("Enter a number to check if it's a palindrome or not:");
    scanf("%d",&n);
    if (ispalindrome(n))
    {
        printf("This is a palindrome.");
    }
    else{
        printf("This is not a palindrome.");
    }
    
    return 0;
}