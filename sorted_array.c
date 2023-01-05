#include<stdio.h>
int main()
{
    int i,j,x[200],n,p;
    printf("\n Enter the number of integers : \n");
    scanf("%d",&n);
    printf("\n Enter the numbers of the array : \n");
    for (i=0;i<=n-1;i++)
        scanf("%d",&x[i]);
    for (i=0;i<=n-1;i++)
    {
        for (j=i;j<=n-1;j++)
            if (x[i]>x[j])
            {
                p=x[i];
                x[i]=x[j];
                x[j]=p;
            }
    }
    printf("The sorted array is:\n");
    for (i=0;i<=n-1;i++)
    {
        printf("%d\n",x[i]);
    }
    return 0;
}