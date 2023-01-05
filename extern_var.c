#include<stdio.h>
#include "temp.c"
//extern int sum=2;// this will give an error as the sum is predefined as 98
//extern int sum;
int add(int a,int b)
{
    int sum=a+b;
    return sum;
}
int main()
{
//int sum;//here sum is local var hence value becomes 0
extern int sum;//extern tells the compiler to bring the sum from external source(temp.c)
    //sum=add(2,3);//local var
    printf("sum is=%d",sum);
    return 0;
}