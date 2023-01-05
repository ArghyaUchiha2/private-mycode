#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int genrandnum(int n)
{
    srand(time(NULL));
    return rand()%n;
}
int main()
{
    srand(time(NULL));//srand takes seed as an input and is defined inside stdlib.h
    //printf("The random no between 0 to 100 is: %d\n",rand()%100);
    printf("The random no between 0 to 100 is: %d\n",genrandnum(100));//Alternative method.
    return 0;
}