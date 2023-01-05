#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    printf("The address of the first element of the array is %d\n",&arr[0]);
    printf("The address of the first element of the array is %d\n",arr);
    printf("The value at address of the first element of the array is %d,\n",*&arr[0]);
    printf("The value at address of the first element of the array is %d,\n",*arr);

    printf("The address of the fifth element of the array is %d\n",&arr[4]);
    printf("The address of the fifth element of the array is %d\n",arr+4);
    return 0;
}