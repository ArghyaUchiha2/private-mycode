#include<stdio.h>
int main()
{
    int n;
    for(int i=0;i<=5;i++)
    {
        for(int j=0;j<=5;j++)
        {
            printf("\n%d%d)Enter your age:",i,j);
            scanf("%d",&n);
            
            if(n==0)
            goto end;
            printf("Press 0 to exit.");
        }
    }
    end:
    return 0;
}