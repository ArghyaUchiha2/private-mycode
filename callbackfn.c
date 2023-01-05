#include<stdio.h>
float avg(int a, int b)
{
    return (a+b)/2.;
}
void greetGE(int(*ptr)(int,int))
{
    printf("Good evening user\n");
}
void greetGn(int(*ptr)(int,int))
{
    printf("Good night user\n");
}
int main()
{
    float(*ptr)(int,int);
    ptr=&avg;
    int a,b;
    greetGE(ptr);
    printf("Enter two integers:");
    scanf("%d%d",&a,&b);
    printf("The avg of the given two no.s is: %f",(*ptr)(a,b));
    return 0;
}