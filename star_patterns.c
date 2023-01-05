//Take input from user to choose 0 for triangular star pattern, 1 for reversed triangular star pattern.
//print accordingly.
#include<stdio.h>
// char star(int n)
// {
//     if(n==1)
//     return ('*');
//     else
//     return '*' (star(n-1));
// }
int main()
{
    int n,m,i,j;
    printf("Press 0 for triangular star pattern.\n");
    printf("Press 1 for reversed triangular star pattern.\n");
    scanf("%d",&n);
    switch (n)
    {
    case 0:
        printf("Enter the no of layers of the pattern:");
    scanf("%d",&m);

        for(i=1;i<=m;i++)
        {
            for(j=1;j<=i;j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        break;
    case 1:
        printf("Enter the no of layers of the pattern:");
    scanf("%d",&m);

        for(i=m;i>=1;i--)
        {
            for(j=1;j<=i;j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        break;
    default:
    printf("WRONG INPUT.");
        break;
    }

    return 0;
} 