#include <stdio.h>
int fn(int array[])
{
    int i;
    array[1] = 37; // any changes here can change the value in main.
    for (i = 0; i <= 4; i++)
        printf("%d\n", array[i]);
    return 0;
}
int fn2(int* ptr)
{
    int i;
    for (i = 0; i <= 4; i++)
        printf("%d\n", *(ptr+i));
        *(ptr+2)=91;
}
int main()
{
    int arr[] = {12, 15, 64, 75, 3}, i, temp,temp2;
    printf("The original array is:\n");
    for (i = 0; i <= 4; i++)
        printf("%d\n", arr[i]);
    printf("Array from function 1 is:\n");
    temp = arr[1];
    fn(arr);
    printf("The value of a[1]=%d after change in pointer is:%d\n", temp, arr[1]);
     printf("Array from function 2 is:\n");
     temp2=arr[2];
     fn2(arr);
         printf("The value of a[2]=%d after change in pointer is:%d", temp2, arr[2]);

    return 0;
}