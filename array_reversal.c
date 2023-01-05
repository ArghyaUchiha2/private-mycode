#include<stdio.h>
void arrrev(int arr[])
{
    int i;
    for(i=0;i<5/2;i++)
    {
        int temp=arr[i];
        arr[i]=arr[4-i];
        arr[4-i]=temp;
    }
}
int main()
{
    int arr[]={10,12,34,21,43},i;
    printf("Original array is:\n");
    for(i=0;i<5;i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\nInverted array is:\n");
    arrrev(arr);
    for(i=0;i<5;i++)
    {
        printf("%d  ",arr[i]);
    }
    return 0;
}