#include<stdio.h>
int sum(int a, int b)
{
    return a+b;
}
void printerlala()
{
    printf("lala\n");
}
int main()
{
    printf("The sum of 4 and 6 is %d\n",sum(4,6));
    int(*fptr)(int,int);
    fptr=&sum;
    printf("The sum of 4 and 6 using fptr: %d\n",(*fptr)(4,6));
    int(*fptr2)(int, int);
    fptr2=&printerlala;//func runs from here
    printf("fptr2: ",(*fptr2)(0,0));
    return 0;
}