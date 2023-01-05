#include <stdio.h>
int main()
{
    int i, age, n;
    char name[25];
    printf("Enter the no of guests:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d)Enter your age:", i);
        scanf("%d", &age);
        getchar();
        printf("%d)Enter your name:", i);
        gets(name);

        if (age <= 18 || name[25]=="arghya")
        {
            printf("You can not enter the bar.\n");
            continue;
        }
        printf("You can enter the bar.\n");
    }
    return 0;
}