#include<stdio.h>
int main()
{
    int i,age;
    for(i=1;i<=5;i++)
    {
        printf("%d)Enter your age:",i);
        scanf("%d",&age);
        if(age<18)
        {
            printf("You cannot enter the bar.\n");
            break;
        }
    }
    return 0;
}