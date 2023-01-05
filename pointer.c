#include<stdio.h>
int main()
{
    int a=4;
    int *ptr=&a;
    int *ptr2=NULL;
    printf("The value of ptr2 is:%d\n",ptr2);
    printf("The value of a is:%d\n",a);
    printf("The address of a is:%x\n",&a);
    printf("The value of ptr is:%x\n",ptr);
    printf("The value of *ptr is:%d\n",*ptr);
    printf("The address of ptr is:%x\n",&ptr);
    return 0;
}