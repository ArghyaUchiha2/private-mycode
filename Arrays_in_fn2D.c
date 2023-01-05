#include<stdio.h>
int fn(int arr[2][4])
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("The value at %d,%d is %d\n",i+1,j+1,arr[i][j]);
        }
    }
    return 0;
}
int main()
{
    int a[2][4]={{1,2,3,4},{7,8,9,10}},i,j;
    printf("The original array is:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("The array from fn is:\n");
    fn(a);

    return 0;
}