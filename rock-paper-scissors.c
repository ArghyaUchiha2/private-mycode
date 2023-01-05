#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
int genrandnum(void)
{
    srand(time(NULL));
    return rand()%3;
}
int main()
{
    char name[20];
    start:
    int k,n,c=0,y=0,start;
    printf("Enter your name: ");
    scanf("%s",&name);
    for(int i=0;i<3;i++)
    {
        printf("       ROUND  %d       \n",i+1);
        Sleep(1000);
        printf("Press '0' to select ROCK.\n");
        printf("Press '1' to select PAPER.\n");
        printf("Press '2' to select SCISSORS.\n");
        scanf("%d",&n);
        printf("YOU HAVE SELECTED ");
        if(n==0)
        printf("ROCK\n");
        else if(n==1)
        printf("PAPER\n");
        else if(n==2)
        printf("SCISSORS\n");
        k=genrandnum();
        Sleep(2000);
        if (k==0)
        printf("COMPUTER CHOOSES ROCK\n");
        else if (k==1)
        printf("COMPUTER CHOOSES PAPER\n");
        else if (k==2)
        printf("COMPUTER CHOOSES SCISSORS\n");
        else
        printf("WRONG INPUT\n");
        Sleep(2000);
        
        switch (n)
        {
        case 0:
            if(k==0)
            printf("DRAW");
            else if(k==1)
            {
                printf("COMPUTER WINS");
                c++;
            }
            else
            {
                printf("YOU WIN");
                y++;
            }
            break;
        case 1:
            if(k==1)
            printf("DRAW");
            else if(k==2)
            {
                printf("COMPUTER WINS");
                c++;
            }
            else
            {
                printf("YOU WIN");
                y++;
            }
            break;
        case 2:
            if(k==2)
            printf("DRAW");
            else if(k==0)
            {
                printf("        SCORE       \n%s: %d        COUMPUTER:%d\n",name,y,c);
                printf("COMPUTER WINS");
                c++;
            }
            else
            {
                printf("YOU WIN");
                y++;
            }
            break;
        
        default:
            break;
        }
        Sleep(2000);
        printf("\n        SCORE       \n%s: %d        COUMPUTER:%d\n",name,y,c);
        Sleep(1000);

    }
    Sleep(2000);
    printf("        END GAME        \n");
    if(c>y)
    printf("        YOU LOSE        ");
    else if(y>c)
    printf("        YOU WIN         ");
    else
    printf("          DRAW          ");
    return 0;
}