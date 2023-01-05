#include<stdio.h>
void addst2a(int *x,int *y)
{
    //changes here can change the values in main.
    int temp;
    temp=*x;
    *x=*x+*y;
    *y=temp-*y;
    return;
}
int main()
{
    int a=4,b=3;
    printf("a=%d and b=%d\n",a,b);
    addst2a(&a,&b);
    printf("After operation:\na=%d,b=%d",a,b);
    return 0;
}