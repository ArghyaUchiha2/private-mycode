#include<stdio.h>
void printstr(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
    printf("\n");
}
int main()
{
    char str[]={'r','o','n','t','y','\0'};
    char str2[20];
    printf("Enter string 2:");
    gets(str2);
    printf("string 1:%s\n",str);
    printf("string 2:%s\n",str2);
    printf("string 2 using custom fn:");
    printstr(str2);
    printf("string 2 using puts:");
    puts(str2);
    printf("string 2 using printf:%s",str2);
    return 0;
}