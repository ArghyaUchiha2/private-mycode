#include<stdio.h>
int main()
{
    int n,i=0;
    printf("Enter a num:");
    scanf("%d",&n);
    printf("All intergers from %d to %d are:",i,n);
    do
    {
        printf("\n%d",i);
        i=i+1;
    }while(i<=n);
    return 0;
}