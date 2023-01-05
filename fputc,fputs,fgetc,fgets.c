#include<stdio.h>
int main()
{
    FILE *ptr=NULL;
    //for fgetc and fgets
    //ptr=fopen("myfile.txt","r");
    //fgetc ops
    /*char c= fgetc(ptr);
    printf("The character I got was %c\n",c);
    c= fgetc(ptr);
    printf("The character I got was %c\n",c);
    c= fgetc(ptr);
    printf("The character I got was %c\n",c);
    c= fgetc(ptr);
    printf("The character I got was %c\n",c);*/
    
    //fgets ops
    /*char str[7];
    fgets(str,4,ptr);
    printf("The string I got was %s\n",str);
    fgets(str,6,ptr);
    printf("The string I got was %s\n",str);
    fclose(ptr);*/
    
    //fputs fputc ops
    ptr=fopen("myfile.txt","w");
    fputc('o',ptr);
    fputs("this is arghya",ptr);
    fclose(ptr);//must close a file after use
    return 0;
}