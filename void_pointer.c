#include<stdio.h>
int main()
{
    int a=45;
    float b=9.8;
    void *ptr;
    ptr=&a;
    //printf("The value of a is:%p\n",*ptr); //this will cause error ptr is a void pointer
    printf("The value of a is:%d\n",*((int *)ptr));
    ptr=&b;
    printf("The value of b is:%.2f\n",*((float *)ptr));
    return 0;
}