#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]="arghya";
    char s2[]="ronty";
    char s3[]="bhowmick";
    char s4[]="bhowchas";
    printf("string 1:");
    puts(s1);
    printf("string 2:");
    puts(s2);
        printf("string 3:");
    puts(s3);
//strcpy function
    printf("After strcpy(s2,s3):\n");
     printf("string 1:");
    puts(s1);
    strcpy(s2,s3);
    printf("string 2:");
    puts(s2);
        printf("string 3:");
    puts(s3);

    //printf("strcat(s1,s2):");
    //puts(strcat(s1,s2));
    printf("string 1 length:%d\n",strlen(s1));
    printf("string 2 length:%d\n",strlen(s2));

    //strcmp function
    printf("strcmp(s2,s3):%d\n",strcmp(s2,s3));
    printf("strcmp(s4,s3):%d\n",strcmp(s4,s3));
    puts(strrev(s4));
    
    return 0;
}
// Allow user to enter two strings and concatinate them by saying that
//str1 is a friend of str2 then contatinate
//enter a third str3 then concatinate all 3