//ABC pvt ltd manages employee records of other companies.
//Employee id can be of any length and can have any character
//For three employees you have to take the length of eID and input.
//Display the employee id on screen.
//eID is stored in a char array stored dynamically
//only one char array allowed
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int* ptr;
    int n;
    for(int i=0;i<3;i++)
    {
        printf("\n%d) Enter your employee ID length:",i+1);
        scanf("%d",&n);
        getchar();
        //Enter was being used as an input of ptr next line. Hence, getchar.
        ptr=(char*)malloc((n+1)*sizeof(char));
        printf("%d) Enter your employee ID:",i+1);
        gets(ptr);
        printf("\nYour Employee ID is %s\n",ptr);
        free(ptr);
    }
    
    return 0;
}