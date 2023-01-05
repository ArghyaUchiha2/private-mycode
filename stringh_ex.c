#include<stdio.h>
int main()
{
    char str1[10],str2[10],str3[]="ronty";
    printf("Enter the name of 1st friend:");
    gets(str1);
    printf("Enter the name of 2nd friend:");
    gets(str2);
    printf("%s and %s are friends:",str1,str2);
    printf("%s\n",strcat(str1,str2));
    printf("%s",strcat(str1,str3));

    return 0;
}