#include<stdio.h>
#include<stdlib.h>//must include to use malloc,calloc,realloc,free
int main()
{
    int* ptr;
    int n;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));//intializes all values to 0
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of %d element of the array:",i);
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the value of %d element of the array is:%d\n",i,ptr[i]);
    }
    //free(ptr);
    printf("\nEnter the new size of the array:");
    scanf("%d",&n);
    realloc(ptr,n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of new %d element of the array:",i);
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the value of new %d element of the array is:%d\n",i,ptr[i]);
    }
    
    return 0;
}