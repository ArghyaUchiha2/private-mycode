#include<stdio.h>
#include<string.h>
char *replaceword(const char* str,const char* oldword, const char* newword)
{
    char *resultstring;
    int i,count=0;
    int newwordlength=strlen(newword);
    int oldwordlength=strlen(oldword);

    //lets count the no of times old word gets repeated
    for(i=0;str[i]!='\0';i++)
    {
        if(strstr(&str[i],oldword)==str[i])
        {
            count++;

            //Jump over this word
            i=i+oldwordlength-1;
        }
    }
    //Making a new string to fit in the replaced word
    
}
int main()
{
    FILE *ptr=NULL;
    FILE *ptr2=NULL;
    ptr2=fopen("genbill.txt","w");
    ptr=fopen("bill.txt","r");
    char *str[200];
    fgets(str, 200, ptr);
    printf("The given bill template was: %s\n",str);

    //replace word fn and generate new str
    char* newstr=str;
    char* name[20], items[50], outlet[20];
    printf("Enter the name of the customer:");
    gets(name);
    printf("Enter the items:");
    gets(items);
    printf("Enter the name of outlet:");
    gets(outlet);
    printf("The new bill template is: %s\n",newstr);
    fprintf(ptr2,"%s",newstr);
    fclose(ptr);
    fclose(ptr2);
    return 0;
}