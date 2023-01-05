#include<stdio.h>
void fn(int b)
{
    static int a=9;
    printf("The value of static variable a is: %d\n",a);
    a++;
}
void fn1(int b)
{
    int a=9;
    printf("The value of local variable a is: %d\n",a);
    a++;
}

int main()
{
    int b;
    fn(b);
    fn1(b);
    fn(b);
    fn1(b);
    fn(b);
    fn1(b);
    fn(b);
    fn1(b);
    fn(b);
    fn1(b);
    return 0;
}