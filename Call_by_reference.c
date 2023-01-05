//Call by reference example
#include<stdio.h>
void swap(int *x,int *y)
{
    int temp;
    temp= *x;
    *x=*y;
    *y=temp;
    return;
}
void swap2(int x,int y)
{
    int temp;
    printf("x:%d y:%d\n",x,y);
    temp=x;
    x=y;
    y=temp;
    printf("x:%d y:%d\n",x,y);
    return;
}
int main()
{
    int a=29,b=35;
    printf("a=%d and b=%d\n",a,b);
    // swap2(a,b);
    // printf("a:%d  b:%d",a,b);
    swap(&a,&b);
    printf("After swap:\na=%d and b=%d",a,b);
    return 0;
}