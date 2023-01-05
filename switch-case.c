#include<stdio.h>
int main ()
{
    int age,marks;
    printf("Enter your age:");
    scanf("%d",&age);
    printf("Enter your marks:");
    scanf("%d",&marks);
    
    switch (age)
    {
    case 13:
        printf("Your age is 13.");
        switch (marks)
        {
        case 80:
            printf("\nYour marks are 80");
            break;
        
        default:
        printf("\nYour marks are not 80.");
            break;
        }
        break;
    case 18:
        printf("Your age is 18.");
        switch (marks)
        {
        case 65:
            printf("\nYour marks are 65.");
            break;
        
        default:
        printf("\nYour marks are not 65.");
            break;
        }
        break;
    case 23:
        printf("Your age is 23.");
        switch (marks)
        {
        case 50:
            printf("\nYour marks are 50.");
            break;
        
        default:
        printf("\nYour marks are not 50.");
            break;
        }
        break;
    
    default:
    printf("Your age is not 13,18,23");
        break;
    }
    return 0;
}