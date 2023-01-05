#include<stdio.h>
int main()
{
    int p,c,m;
    printf("Enter the no of marks you got in physics:");
    scanf("%d",&p);
    printf("Enter the no of marks you got in chemistry:");
    scanf("%d",&c);
    printf("Enter the no of marks you got in mathematics:");
    scanf("%d",&m);
    if(p>=80 && c>=80 && m>=80)
    printf("Congrats! You win a laptop.");
    else if(p>=80 && c>=80 && m>=25 || p>=80 && m>=80 && c>=25 || c>=80 && m>=80 && p>=25)
    printf("Congrats! You win a book.");
    else if(p>=80 && c>=25 && m>=25  || c>=80 && p>=25 && m>=25 || m>=80 && c>=25 && p>=25 )
    printf("Congrats! You get a pen.");
    else if(p<25 && c>=25 && m>=25)
    printf("You have failed in Physics.");
    else if(c<25 && p>=25 && m>=25)
    printf("You have failed in Chemistry.");
    else if(m<25 && c>=25 && p>=25)
    printf("You have failed in Mathematics.");
    else if(p>=25 && p<80 && c>=25 && c<80 && m>=25 && m<80)
    printf("You have passed.");
    else
    printf("You have failed.");
    return 0;
}