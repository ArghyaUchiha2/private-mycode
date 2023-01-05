#include<stdio.h>
int main()
{
    int c1,r1,c2,r2,i,j;
    printf("Enter the no of rows of the A matrix: \n");
    scanf("%d",&r1);
    printf("Enter the no of coloumns of the A matrix: \n");
    scanf("%d",&c1);
    printf("Enter the no of rows of the B matrix: \n");
    scanf("%d",&r2);
    printf("Enter the no of coloumns of the B matrix: \n");
    scanf("%d",&c2);
    int A[r1][c1],B[r2][c2];
    if(c1==r2)
    {
        printf("Enter the values of the first matrix: \n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf("\nEnter the value of A[%d][%d]: ",i+1,j+1);
                scanf("%d",&A[i][j]);
            }
        }
        printf("Enter the values of the second matrix: \n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("\nEnter the value of B[%d][%d]: ",i+1,j+1);
                scanf("%d",&B[i][j]);
            }
        }
        int C[r1][c2];
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                    int sum=0;
                for(int k=0;k<r2;k++)
                {
                    sum=sum+A[i][k]*B[k][j];
                }
                C[i][j]=sum;
            }
        }
        printf("The multiplied matrix is: \n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%d  ",C[i][j]);
            }
            printf("\n");
        }
    }
    else
    printf("Given matrices cannot be multiplied.\n");
    return 0;

}