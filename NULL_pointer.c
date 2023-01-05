#include<stdio.h>
int main()
{
    int a=24;
    int *ptr=NULL;
    printf("The address of the pointer is %d\n",ptr);
    //printf("The value of the pointer is %d\n",*ptr);//this causes the program to crash as null pointer cannot be dereferenced
    ptr=&a;
    printf("The value of a is %d\n",*ptr);
    return 0;
}